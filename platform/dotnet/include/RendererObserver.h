#pragma once
#include "NativeWrapper.h"
#include <functional>
#include <string>
#include <mbgl/renderer/renderer_observer.hpp>
#include <msclr/gcroot.h>

namespace DOTNET_NAMESPACE
{
    class NativeRendererObserver;
    
    public ref class RendererObserver : NativeWrapper<NativeRendererObserver>
	{
	public:
        enum class RenderMode : System::UInt32
        {
            Partial,
            Full
        };

        delegate void StyleImageMissingCallback();

        delegate System::Void InvalidateHandler();
        delegate System::Void ResourceErrorHandler(System::Exception^ ex);
        delegate System::Void WillStartRenderingMapHandler();
        delegate System::Void WillStartRenderingFrameHandler();
        delegate System::Void DidFinishRenderingFrameHandler(RenderMode mode, bool repaintNeeded, bool placementChanged);
        delegate System::Void DidFinishRenderingMapHandler();
        delegate System::Void StyleImageMissingHandler(System::String^ image, StyleImageMissingCallback^ callback);
        delegate System::Void RemoveUnusedStyleImagesHandler(System::Collections::Generic::IEnumerable<System::String^>^ unusedImageIDs);

        event InvalidateHandler^ Invalidate;
        event ResourceErrorHandler^ ResourceError;
        event WillStartRenderingMapHandler^ WillStartRenderingMap;
        event WillStartRenderingFrameHandler^ WillStartRenderingFrame;
        event DidFinishRenderingFrameHandler^ DidFinishRenderingFrame;
        event DidFinishRenderingMapHandler^ DidFinishRenderingMap;
        event StyleImageMissingHandler^ StyleImageMissing;
        event RemoveUnusedStyleImagesHandler^ RemoveUnusedStyleImages;

        RendererObserver();
		~RendererObserver();

    protected:
        virtual System::Void onInvalidate();
        virtual System::Void onResourceError(System::Exception^ ex);
        virtual System::Void onWillStartRenderingMap();
        virtual System::Void onWillStartRenderingFrame();
        virtual System::Void onDidFinishRenderingFrame(RenderMode mode, bool repaintNeeded, bool placementChanged);
        virtual System::Void onDidFinishRenderingMap();
        virtual System::Void onStyleImageMissing(System::String^ image, StyleImageMissingCallback^ callback);
        virtual System::Void onRemoveUnusedStyleImages(System::Collections::Generic::IEnumerable<System::String^>^ unusedImageIDs);
    };

    ref class StyleImageMissingCallbackHelper
    {
    public:
        StyleImageMissingCallbackHelper(NativeRendererObserver* observer);
        ~StyleImageMissingCallbackHelper();
        !StyleImageMissingCallbackHelper();

        void StyleImageMissingCallbackHandler();
    private:
        NativeRendererObserver* _Observer;
    };

    class NativeRendererObserver : public mbgl::RendererObserver
    {
    public:
        NativeRendererObserver();
        ~NativeRendererObserver();

        void onInvalidate() override;
        void onResourceError(std::exception_ptr eptr) override;
        void onWillStartRenderingMap() override;
        void onWillStartRenderingFrame() override;
        void onDidFinishRenderingFrame(RenderMode renderMode, bool needsRepaint, bool placemenChanged) override;
        void onDidFinishRenderingMap() override;
        void onStyleImageMissing(const std::string& id, const StyleImageMissingCallback& done) override;
        void onRemoveUnusedStyleImages(const std::vector<std::string>& unusedImageIDs) override;

        void StyleImageMissingCallbackHandler(StyleImageMissingCallbackHelper^ callbackHelper);

        msclr::gcroot<DOTNET_NAMESPACE::RendererObserver::InvalidateHandler^> InvalidateHandler;
        msclr::gcroot<DOTNET_NAMESPACE::RendererObserver::ResourceErrorHandler^> ResourceErrorHandler;
        msclr::gcroot<DOTNET_NAMESPACE::RendererObserver::WillStartRenderingMapHandler^> WillStartRenderingMapHandler;
        msclr::gcroot<DOTNET_NAMESPACE::RendererObserver::WillStartRenderingFrameHandler^> WillStartRenderingFrameHandler;
        msclr::gcroot<DOTNET_NAMESPACE::RendererObserver::DidFinishRenderingFrameHandler^> DidFinishRenderingFrameHandler;
        msclr::gcroot<DOTNET_NAMESPACE::RendererObserver::DidFinishRenderingMapHandler^> DidFinishRenderingMapHandler;
        msclr::gcroot<DOTNET_NAMESPACE::RendererObserver::StyleImageMissingHandler^> StyleImageMissingHandler;
        msclr::gcroot<DOTNET_NAMESPACE::RendererObserver::RemoveUnusedStyleImagesHandler^> RemoveUnusedStyleImagesHandler;
    private:
        msclr::gcroot<System::Collections::Concurrent::ConcurrentDictionary<StyleImageMissingCallbackHelper^, System::IntPtr>^> _PendingCallbacks = gcnew System::Collections::Concurrent::ConcurrentDictionary<StyleImageMissingCallbackHelper^, System::IntPtr>();
    };
}

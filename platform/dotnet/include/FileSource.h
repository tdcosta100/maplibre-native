#pragma once
#include "NativeWrapper.h"
#include <msclr/gcroot.h>

namespace mbgl
{
    class AsyncRequest;
    class FileSource;
    class Response;
}

namespace DOTNET_NAMESPACE
{
    ref class AsyncRequest;
    ref class ClientOptions;
    ref class Resource;
    ref class ResourceOptions;
    ref class ResourceTransform;
    ref class Response;

    using ClientOptions_ = ClientOptions;
    using ResourceOptions_ = ResourceOptions;
    
    public ref class FileSource : NativeWrapper<std::shared_ptr<mbgl::FileSource>>
	{
	public:
        delegate System::Void Callback(Response^ response);

        ~FileSource();
        !FileSource();
        
        virtual AsyncRequest^ Request(Resource^ resource, Callback^ callback);
        virtual System::Void Forward(Resource^ resource, Response^ response, System::Action^ callback);
        virtual System::Boolean SupportsCacheOnlyRequests();
        virtual System::Boolean CanRequest(Resource^ resource);
        virtual System::Void Pause();
        virtual System::Void Resume();
        virtual System::Void SetProperty(System::String^ key, System::String^ value);
        virtual System::String^ GetProperty(System::String^ key);
        virtual System::Void SetResourceTransform(ResourceTransform^ transform);

        virtual property ResourceOptions_^ ResourceOptions { ResourceOptions_^ get(); System::Void set(ResourceOptions_^ value); }
        virtual property ClientOptions_^ ClientOptions { ClientOptions_^ get(); System::Void set(ClientOptions_^ value); }
    internal:
        FileSource(NativePointerHolder<std::shared_ptr<mbgl::FileSource>>^ nativePointerHolder);
    };
}

#pragma once
#include "NativeWrapper.h"
#include <msclr/gcroot.h>

namespace mbgl
{
    struct AnimationOptions;
}

namespace DOTNET_NAMESPACE
{
    ref class UnitBezier;

    public delegate void TransitionFrameFunction(System::Double t);
    public delegate void TransitionFinishFunction();

    using TransitionFrameFunction_ = TransitionFrameFunction;
    using TransitionFinishFunction_ = TransitionFinishFunction;
    
    class NativeTransitionFunctionsHelper
    {
    public:
        void NativeTransitionFrameFunction(double t);
        void NativeTransitionFinishFunction();

        msclr::gcroot<TransitionFrameFunction_^> ManagedTransitionFrameFunction;
        msclr::gcroot<TransitionFinishFunction_^> ManagedTransitionFinishFunction;
    };

    public ref class AnimationOptions : NativeWrapper<mbgl::AnimationOptions>
	{
	public:
		AnimationOptions();
        AnimationOptions(System::TimeSpan d);
        ~AnimationOptions();

        property System::Nullable<System::TimeSpan> Duration { System::Nullable<System::TimeSpan> get(); System::Void set(System::Nullable<System::TimeSpan> value); }
        property System::Nullable<System::Double> Velocity { System::Nullable<System::Double> get(); System::Void set(System::Nullable<System::Double> value); }
        property System::Nullable<System::Double> MinZoom { System::Nullable<System::Double> get(); System::Void set(System::Nullable<System::Double> value); }
        property UnitBezier^ Easing { UnitBezier^ get(); System::Void set(UnitBezier^ value); }
        property TransitionFrameFunction^ TransitionFrameFn { TransitionFrameFunction^ get(); System::Void set(TransitionFrameFunction^ value); }
        property TransitionFinishFunction^ TransitionFinishFn { TransitionFinishFunction^ get(); System::Void set(TransitionFinishFunction^ value); }
    internal:
        AnimationOptions(NativePointerHolder<mbgl::AnimationOptions>^ nativePointerHolder);
    private:
        NativeTransitionFunctionsHelper* _TransitionFunctionsHelper = new NativeTransitionFunctionsHelper();
    };
}

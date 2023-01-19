#pragma once
#include "NativeWrapper.h"

namespace mbgl
{
    struct ProjectionMode;
}

namespace DOTNET_NAMESPACE
{
    public ref class ProjectionMode : NativeWrapper<mbgl::ProjectionMode>
	{
	public:
		ProjectionMode();
		~ProjectionMode();

        ProjectionMode^ WithAxonometric(bool o);
        ProjectionMode^ WithXSkew(double o);
        ProjectionMode^ WithYSkew(double o);

        property System::Nullable<System::Boolean> Axonometric { System::Nullable<System::Boolean> get(); System::Void set(System::Nullable<System::Boolean> value); }
        property System::Nullable<System::Double> XSkew { System::Nullable<System::Double> get(); System::Void set(System::Nullable<System::Double> value); }
        property System::Nullable<System::Double> YSkew { System::Nullable<System::Double> get(); System::Void set(System::Nullable<System::Double> value); }
    internal:
        ProjectionMode(NativePointerHolder<mbgl::ProjectionMode>^ nativePointerHolder);
    };
}

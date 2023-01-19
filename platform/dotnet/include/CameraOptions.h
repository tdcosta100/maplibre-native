#pragma once
#include "NativeWrapper.h"
#include "Point.h"

namespace mbgl
{
	struct CameraOptions;
}

namespace DOTNET_NAMESPACE
{
    ref class EdgeInsets;
    ref class LatLng;
    
    public ref class CameraOptions : NativeWrapper<mbgl::CameraOptions>
	{
	public:
		CameraOptions();
		~CameraOptions();

        CameraOptions^ WithCenter(LatLng^ o);
        CameraOptions^ WithPadding(EdgeInsets^ p);
        CameraOptions^ WithAnchor(System::Nullable<ScreenCoordinate> o);
        CameraOptions^ WithZoom(System::Nullable<System::Double> o);
        CameraOptions^ WithBearing(System::Nullable<System::Double> o);
        CameraOptions^ WithPitch(System::Nullable<System::Double> o);

        property LatLng^ Center { LatLng^ get(); System::Void set(LatLng^ value); }
        property EdgeInsets^ Padding { EdgeInsets^ get(); System::Void set(EdgeInsets^ value); }
        property System::Nullable<ScreenCoordinate> Anchor { System::Nullable<ScreenCoordinate> get(); System::Void set(System::Nullable<ScreenCoordinate> value); }
        property System::Nullable<System::Double> Zoom { System::Nullable<System::Double> get(); System::Void set(System::Nullable<System::Double> value); }
        property System::Nullable<System::Double> Bearing { System::Nullable<System::Double> get(); System::Void set(System::Nullable<System::Double> value); }
        property System::Nullable<System::Double> Pitch { System::Nullable<System::Double> get(); System::Void set(System::Nullable<System::Double> value); }

        static System::Boolean operator==(CameraOptions^ a, CameraOptions^ b);
        static System::Boolean operator!=(CameraOptions^ a, CameraOptions^ b);
    internal:
        CameraOptions(NativePointerHolder<mbgl::CameraOptions>^ nativePointerHolder);
    private:
        LatLng^ _Center;
        EdgeInsets^ _Padding;
        System::Nullable<ScreenCoordinate> _Anchor;
    };
}

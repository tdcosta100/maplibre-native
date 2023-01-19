#pragma once
#include "NativeWrapper.h"

namespace mbgl
{
    struct FreeCameraOptions;
}

namespace DOTNET_NAMESPACE
{
    ref class Vec3;
    ref class Vec4;
    ref class LatLng;
    ref class LatLngAltitude;

    public ref class FreeCameraOptions : NativeWrapper<mbgl::FreeCameraOptions>
    {
    public:
        FreeCameraOptions();
        ~FreeCameraOptions();

        System::Void LookAtPoint(LatLng^ location);
        System::Void LookAtPoint(LatLng^ location, Vec3^ upVector);
        System::Void SetPitchBearing(System::Double pitch, System::Double bearing);

        property Vec3^ Position { Vec3^ get(); System::Void set(Vec3^ value); }
        property Vec4^ Orientation { Vec4^ get(); System::Void set(Vec4^ value); }
        property LatLngAltitude^ Location { LatLngAltitude^ get(); System::Void set(LatLngAltitude^ value); }
    internal:
        FreeCameraOptions(NativePointerHolder<mbgl::FreeCameraOptions>^ nativePointerHolder);
    };
}

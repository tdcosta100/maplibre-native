#pragma once
#include "NativeWrapper.h"

namespace mbgl
{
    struct BoundOptions;
}

namespace DOTNET_NAMESPACE
{
    ref class LatLngBounds;

    public ref class BoundOptions : NativeWrapper<mbgl::BoundOptions>
	{
	public:
		BoundOptions();
		~BoundOptions();

        BoundOptions^ WithLatLngBounds(LatLngBounds^ b);
        BoundOptions^ WithMinZoom(System::Double z);
        BoundOptions^ WithMaxZoom(System::Double z);
        BoundOptions^ WithMinPitch(System::Double p);
        BoundOptions^ WithMaxPitch(System::Double p);

        property LatLngBounds^ Bounds { LatLngBounds^ get(); System::Void set(LatLngBounds^ value); }
        property System::Nullable<System::Double> MaxZoom { System::Nullable<System::Double> get(); System::Void set(System::Nullable<System::Double> value); }
        property System::Nullable<System::Double> MinZoom { System::Nullable<System::Double> get(); System::Void set(System::Nullable<System::Double> value); }
        property System::Nullable<System::Double> MaxPitch { System::Nullable<System::Double> get(); System::Void set(System::Nullable<System::Double> value); }
        property System::Nullable<System::Double> MinPitch { System::Nullable<System::Double> get(); System::Void set(System::Nullable<System::Double> value); }
    internal:
        BoundOptions(NativePointerHolder<mbgl::BoundOptions>^ nativePointerHolder);
    };
}

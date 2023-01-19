#pragma once
#include "NativeWrapper.h"

namespace mbgl
{
	class LatLng;
    class LatLngBounds;
    struct LatLngAltitude;
}

namespace DOTNET_NAMESPACE
{
    ref class CanonicalTileID;
    ref class UnwrappedTileID;
    
    public ref class LatLng : NativeWrapper<mbgl::LatLng>
	{
	public:
        enum class WrapMode : System::Byte { Unwrapped, Wrapped };

        LatLng();
        LatLng(System::Double lat, System::Double lon);
        LatLng(System::Double lat, System::Double lon, WrapMode mode);
        LatLng(CanonicalTileID^ id);
        LatLng(UnwrappedTileID^ id);
        LatLng(NativePointerHolder<mbgl::LatLng>^ nativePointerHolder);
        ~LatLng();

        LatLng^ Wrapped();
        System::Void Wrap();
        System::Void UnwrapForShortestPath(LatLng^ end);

        property System::Double Latitude { System::Double get(); }
        property System::Double Longitude { System::Double get(); }

        static System::Boolean operator==(LatLng^ a, LatLng^ b);
        static System::Boolean operator!=(LatLng^ a, LatLng^ b);
    };

    public ref class LatLngBounds : NativeWrapper<mbgl::LatLngBounds>
    {
    public:
        LatLngBounds();
        LatLngBounds(CanonicalTileID^ id);
        LatLngBounds(NativePointerHolder<mbgl::LatLngBounds>^ nativePointerHolder);
        ~LatLngBounds();

        static LatLngBounds^ World();
        static LatLngBounds^ Singleton(LatLng^ a);
        static LatLngBounds^ Hull(LatLng^ a, LatLng^ b);
        static LatLngBounds^ Empty();

        LatLng^ Constrain(LatLng^ p);
        System::Void Extend(LatLng^ point);
        System::Void Extend(LatLngBounds^ bounds);
        System::Boolean Contains(CanonicalTileID^ tileID);
        System::Boolean Contains(LatLng^ point);
        System::Boolean Contains(LatLng^ point, LatLng::WrapMode wrap);
        System::Boolean Contains(LatLngBounds^ area);
        System::Boolean Contains(LatLngBounds^ area, LatLng::WrapMode wrap);
        System::Boolean Intersects(LatLngBounds^ area);
        System::Boolean Intersects(LatLngBounds^ area, LatLng::WrapMode wrap);

        property System::Boolean Valid { System::Boolean get(); }
        property System::Double South { System::Double get(); }
        property System::Double West { System::Double get(); }
        property System::Double North { System::Double get(); }
        property System::Double East { System::Double get(); }
        property LatLng^ Southwest { LatLng^ get(); }
        property LatLng^ Northeast { LatLng^ get(); }
        property LatLng^ Southeast { LatLng^ get(); }
        property LatLng^ Northwest { LatLng^ get(); }
        property LatLng^ Center { LatLng^ get(); }
        property System::Boolean IsEmpty { System::Boolean get(); }
        property System::Boolean CrossesAntimeridian { System::Boolean get(); }
    };

    public ref class LatLngAltitude : NativeWrapper<mbgl::LatLngAltitude>
    {
    public:
        LatLngAltitude();
        LatLngAltitude(NativePointerHolder<mbgl::LatLngAltitude>^ nativePointerHolder);
        ~LatLngAltitude();

        property LatLng^ Location { LatLng^ get(); System::Void set(LatLng^ value); }
        property System::Double Altitude { System::Double get(); System::Void set(System::Double value); }
    };
}

#pragma once
#include "NativeWrapper.h"
#include "Point.h"

namespace mbgl
{
	class TileCoordinate;
}

namespace DOTNET_NAMESPACE
{
	ref class LatLng;
	ref class TransformState;
	ref class UnwrappedTileID;

	public ref class TileCoordinate : NativeWrapper<mbgl::TileCoordinate>
	{
	public:
		TileCoordinate();
		~TileCoordinate();

		TileCoordinate^ ZoomTo(System::Double zoom);

		property TileCoordinatePoint P { TileCoordinatePoint get(); System::Void set(TileCoordinatePoint value); }
		property System::Double Z { System::Double get(); System::Void set(System::Double value); }

		static TileCoordinate^ FromLatLng(System::Double zoom, LatLng^ latLng);
		static TileCoordinate^ FromScreenCoordinate(TransformState^ state, System::Byte zoom, ScreenCoordinate screenCoordinate);
		static GeometryCoordinate ToGeometryCoordinate(UnwrappedTileID^ tileID, TileCoordinatePoint point);
	internal:
		TileCoordinate(NativePointerHolder<mbgl::TileCoordinate>^ nativePointerHolder);
	};
}

#pragma once
#include "Enums.h"
#include "NativeWrapper.h"

namespace mbgl
{
	class MapOptions;
}

namespace DOTNET_NAMESPACE
{
	ref class Size;

	using Size_ = Size;

	public ref class MapOptions : NativeWrapper<mbgl::MapOptions>
	{
	public:
		MapOptions();
		~MapOptions();

		MapOptions^ WithMapMode(DOTNET_NAMESPACE::MapMode mode);
		MapOptions^ WithConstrainMode(DOTNET_NAMESPACE::ConstrainMode mode);
		MapOptions^ WithViewportMode(DOTNET_NAMESPACE::ViewportMode mode);
		MapOptions^ WithCrossSourceCollisions(System::Boolean enableCollisions);
		MapOptions^ WithNorthOrientation(DOTNET_NAMESPACE::NorthOrientation orientation);
		MapOptions^ WithSize(Size_^ size);
		MapOptions^ WithPixelRatio(System::Single ratio);

		property DOTNET_NAMESPACE::MapMode MapMode { DOTNET_NAMESPACE::MapMode get(); }
		property DOTNET_NAMESPACE::ConstrainMode ConstrainMode { DOTNET_NAMESPACE::ConstrainMode get(); }
		property DOTNET_NAMESPACE::ViewportMode ViewportMode { DOTNET_NAMESPACE::ViewportMode get(); }
		property System::Boolean CrossSourceCollisions { System::Boolean get(); }
		property DOTNET_NAMESPACE::NorthOrientation NorthOrientation { DOTNET_NAMESPACE::NorthOrientation get(); }
		property Size_^ Size { Size_^ get(); }
		property System::Single PixelRatio { System::Single get(); }
	internal:
		MapOptions(NativePointerHolder<mbgl::MapOptions>^ nativePointerHolder);
	};
}

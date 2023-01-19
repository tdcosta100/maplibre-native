#pragma once
#include "NativeWrapper.h"

namespace mbgl
{
	class CanonicalTileID;
}

namespace DOTNET_NAMESPACE
{
	public ref class CanonicalTileID : NativeWrapper<mbgl::CanonicalTileID>
	{
	public:
		CanonicalTileID(System::Byte z, System::UInt32 x, System::UInt32 y);
		~CanonicalTileID();

		System::Boolean IsChildOf(CanonicalTileID^ parent);
		CanonicalTileID^ ScaledTo(System::Byte z);
		System::Collections::Generic::IEnumerable<CanonicalTileID^>^ Children();

		property System::Byte Z { System::Byte get(); System::Void set(System::Byte value); }
		property System::UInt32 X { System::UInt32 get(); System::Void set(System::UInt32 value); }
		property System::UInt32 Y { System::UInt32 get(); System::Void set(System::UInt32 value); }

		System::Boolean operator==(CanonicalTileID^ rhs);
		System::Boolean operator!=(CanonicalTileID^ rhs);
		System::Boolean operator<(CanonicalTileID^ rhs);
	internal:
		CanonicalTileID(NativePointerHolder<mbgl::CanonicalTileID>^ nativePointerHolder);
	};
}

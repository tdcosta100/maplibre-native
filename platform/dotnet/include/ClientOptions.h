#pragma once
#include "NativeWrapper.h"

namespace mbgl
{
	class ClientOptions;
}

namespace DOTNET_NAMESPACE
{
	public ref class ClientOptions : NativeWrapper<mbgl::ClientOptions>
	{
	public:
		ClientOptions();
		~ClientOptions();

		ClientOptions^ Clone();

		ClientOptions^ WithName(System::String^ name);
		ClientOptions^ WithVersion(System::String^ version);

		property System::String^ Name { System::String^ get(); }
		property System::String^ Version { System::String^ get(); }
	internal:
		ClientOptions(NativePointerHolder<mbgl::ClientOptions>^ nativePointerHolder);
	};
}

#pragma once
#include "NativeWrapper.h"

namespace mbgl
{
	class ResourceOptions;
}

namespace DOTNET_NAMESPACE
{
	public ref class ResourceOptions : NativeWrapper<mbgl::ResourceOptions>
	{
	public:
		ResourceOptions();
		~ResourceOptions();

		ResourceOptions^ Clone();
		ResourceOptions^ WithApiKey(System::String^ token);
		// TODO: implement the managed version
		//ResourceOptions^ WithTileServerOptions(TileServerOptions tileServerOptions);
		ResourceOptions^ WithCachePath(System::String^ path);
		ResourceOptions^ WithAssetPath(System::String^ path);
		ResourceOptions^ WithMaximumCacheSize(System::UInt64 size);
		ResourceOptions^ WithPlatformContext(System::IntPtr context);

		static ResourceOptions^ Default();

		property System::String^ ApiKey { System::String^ get(); }
		// TODO: implement the managed version
		//property TileServerOptions TileServerOptions { TileServerOptions get(); }
		property System::String^ CachePath { System::String^ get(); }
		property System::String^ AssetPath { System::String^ get(); }
		property System::UInt64 MaximumCacheSize { System::UInt64 get(); }
		property System::IntPtr PlatformContext { System::IntPtr get(); }
	internal:
		ResourceOptions(NativePointerHolder<mbgl::ResourceOptions>^ nativePointerHolder);
	};
}

#pragma once
#include "NativeWrapper.h"
#include "RendererBackend.h"

namespace mbgl
{
	namespace gfx
	{
		class BackendScope;
	}
}

namespace DOTNET_NAMESPACE
{
	public ref class BackendScope : NativeWrapper<mbgl::gfx::BackendScope>
	{
	public:
		enum class ScopeType : System::Byte
		{
			Implicit,
			Explicit,
		};

		BackendScope(IRendererBackend^ backend);
		BackendScope(IRendererBackend^ backend, ScopeType scopeType);

		~BackendScope();

		static System::Boolean Exists();
	};
}
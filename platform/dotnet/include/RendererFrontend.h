#pragma once

namespace DOTNET_NAMESPACE
{
    ref class RendererObserver;
    ref class UpdateParameters;

    public interface class IRendererFrontend
	{
        System::Void Reset();
        System::Void SetObserver(RendererObserver^ observer);
        System::Void Update(UpdateParameters^ parameters);

        System::IntPtr GetNativePointer();
    };
}

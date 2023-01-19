#pragma once
#include "NativeWrapper.h"
#include "Point.h"

namespace mbgl
{
	class EdgeInsets;
}

namespace DOTNET_NAMESPACE
{
    public ref class EdgeInsets : NativeWrapper<mbgl::EdgeInsets>
	{
	public:
		EdgeInsets();
        EdgeInsets(System::Double top);
        EdgeInsets(System::Double top, System::Double left);
        EdgeInsets(System::Double top, System::Double left, System::Double bottom);
        EdgeInsets(System::Double top, System::Double left, System::Double bottom, System::Double right);
        ~EdgeInsets();

        System::Boolean IsFlush();
        ScreenCoordinate GetCenter(System::UInt16 width, System::UInt16 height);

        property System::Double Top { System::Double get(); }
        property System::Double Left { System::Double get(); }
        property System::Double Bottom { System::Double get(); }
        property System::Double Right { System::Double get(); }

        System::Void operator+=(EdgeInsets^ o);
        EdgeInsets^ operator+(EdgeInsets^ o);
        
        static System::Boolean operator==(EdgeInsets^ a, EdgeInsets^ b);
        static System::Boolean operator!=(EdgeInsets^ a, EdgeInsets^ b);
    internal:
        EdgeInsets(NativePointerHolder<mbgl::EdgeInsets>^ nativePointerHolder);
    };
}

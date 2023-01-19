#pragma once
#include "Image.h"

namespace DOTNET_NAMESPACE
{
    ref class Size;

    public ref class AlphaImage : BaseAlphaImage
    {
    public:
        AlphaImage();
        AlphaImage(Size_^ size);
        AlphaImage(Size_^ size, cli::array<System::Byte>^ srcData);
        ~AlphaImage();

        AlphaImage^ Clone();

        static System::Void Clear(AlphaImage^ dstImg, Point<System::UInt32> pt, Size_^ size);
        static System::Void Copy(AlphaImage^ srcImg, AlphaImage^ dstImg, Point<System::UInt32> srcPt, Point<System::UInt32> dstPt, Size_^ size);
    internal:
        AlphaImage(NativePointerHolder<mbgl::AlphaImage>^ nativePointerHolder);
    };
}

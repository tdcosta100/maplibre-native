#pragma once
#include "Image.h"

namespace DOTNET_NAMESPACE
{
    public ref class PremultipliedImage : BasePremultipliedImage
    {
    public:
        PremultipliedImage();
        PremultipliedImage(Size_^ size);
        PremultipliedImage(Size_^ size, cli::array<System::Byte>^ srcData);
        ~PremultipliedImage();

        PremultipliedImage^ Clone();
        UnassociatedImage^ Unpremultiply();

        static System::Void Clear(PremultipliedImage^ dstImg, Point<System::UInt32> pt, Size_^ size);
        static System::Void Copy(PremultipliedImage^ srcImg, PremultipliedImage^ dstImg, Point<System::UInt32> srcPt, Point<System::UInt32> dstPt, Size_^ size);
        static PremultipliedImage^ DecodeImage(System::String^ data);
        static cli::array<System::Byte>^ EncodePNG(PremultipliedImage^ image);
    internal:
        PremultipliedImage(NativePointerHolder<mbgl::PremultipliedImage>^ nativePointerHolder);
    };
}

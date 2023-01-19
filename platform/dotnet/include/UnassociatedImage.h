#pragma once
#include "Image.h"

namespace DOTNET_NAMESPACE
{
	public ref class UnassociatedImage : BaseUnassociatedImage
	{
	public:
		UnassociatedImage();
		UnassociatedImage(Size_^ size);
		UnassociatedImage(Size_^ size, cli::array<System::Byte>^ srcData);
		~UnassociatedImage();

		UnassociatedImage^ Clone();
		PremultipliedImage^ Premultiply();

		static System::Void Clear(UnassociatedImage^ dstImg, Point<System::UInt32> pt, Size_^ size);
		static System::Void Copy(UnassociatedImage^ srcImg, UnassociatedImage^ dstImg, Point<System::UInt32> srcPt, Point<System::UInt32> dstPt, Size_^ size);
	internal:
		UnassociatedImage(NativePointerHolder<mbgl::UnassociatedImage>^ nativePointerHolder);
	};
}

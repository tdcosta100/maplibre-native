#pragma once

namespace DOTNET_NAMESPACE
{
	public enum class MapMode : System::UInt32
	{
		Continuous,
		Static,
		Tile
	};

	public enum class ConstrainMode : System::UInt32
	{
		None,
		HeightOnly,
		WidthAndHeight,
	};

	public enum class ViewportMode : System::UInt32
	{
		Default,
		FlippedY,
	};

	public enum class NorthOrientation : System::Byte
	{
		Upwards, // Default
		Rightwards,
		Downwards,
		Leftwards,
	};
}

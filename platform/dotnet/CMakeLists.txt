if(NOT MSVC)
	return()
endif()

find_package(libuv REQUIRED)

add_library(mbgl-dotnet SHARED)

set_target_properties(
	mbgl-dotnet
	PROPERTIES
		COMMON_LANGUAGE_RUNTIME ""
		OUTPUT_NAME "MaplibreGLNative.NET"
)

if(CMAKE_GENERATOR STREQUAL "Ninja")
	string(REPLACE "/RTC1" "" CMAKE_CXX_FLAGS_DEBUG ${CMAKE_CXX_FLAGS_DEBUG})
	string(REPLACE "/EHsc" "" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
	target_compile_options(mbgl-dotnet PRIVATE "/clr" "/EHa")
endif()

target_compile_definitions(
	mbgl-dotnet
	PRIVATE
		_USE_MATH_DEFINES
		NOMINMAX
		DOTNET_NAMESPACE=MaplibreGLNative
)

target_sources(
	mbgl-dotnet
	PRIVATE
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/AlphaImage.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/AnimationOptions.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/AsyncRequest.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/BackendScope.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/BoundOptions.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/CameraOptions.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/CanonicalTileID.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/ClientOptions.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/EdgeInsets.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/ExternalRenderingContextBackend.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/ExternalRenderingContextFrontend.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/FileSource.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/FreeCameraOptions.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/GeoJSON.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/HeadlessFrontend.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/Image.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/LatLng.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/Map.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/MapObserver.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/MapOptions.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/OverscaledTileID.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/PremultipliedImage.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/ProjectionMode.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/Renderer.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/RendererBackend.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/RendererObserver.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/RenderingStats.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/Resource.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/ResourceOptions.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/ResourceTransform.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/Response.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/RunLoop.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/Size.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/Style.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/TileCoordinate.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/TransformState.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/UnassociatedImage.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/UnitBezier.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/UnwrappedTileID.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/UpdateParameters.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/Value.cpp
	${PROJECT_SOURCE_DIR}/platform/dotnet/src/Vector.cpp
)

target_include_directories(
	mbgl-dotnet
	PRIVATE
		${PROJECT_SOURCE_DIR}/platform/dotnet/include
		${PROJECT_SOURCE_DIR}/src
)

target_link_libraries(
	mbgl-dotnet
	PRIVATE
		Mapbox::Map
		uv_a
)

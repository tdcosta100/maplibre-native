#pragma once
#include "NativeWrapper.h"
#include <mbgl/storage/response.hpp>

namespace DOTNET_NAMESPACE
{
	public ref class Response : NativeWrapper<mbgl::Response>
	{
	public:
        ref class ResponseError;
        Response();
		~Response();

        System::Boolean IsFresh();
        System::Boolean IsUsable();

        property ResponseError^ Error { ResponseError^ get(); System::Void set(ResponseError^ value); }
        property System::Boolean NoContent { System::Boolean get(); System::Void set(System::Boolean value); }
        property System::Boolean NotModified { System::Boolean get(); System::Void set(System::Boolean value); }
        property System::Boolean MustRevalidate { System::Boolean get(); System::Void set(System::Boolean value); }
        property System::String^ Data { System::String^ get(); System::Void set(System::String^ value); }
        property System::Nullable<System::DateTime> Modified { System::Nullable<System::DateTime> get(); System::Void set(System::Nullable<System::DateTime> value); }
        property System::Nullable<System::DateTime> Expires { System::Nullable<System::DateTime> get(); System::Void set(System::Nullable<System::DateTime> value); }
        property System::String^ ETag { System::String^ get(); System::Void set(System::String^ value); }
    internal:
        Response(NativePointerHolder<mbgl::Response>^ nativePointerHolder);
    private:
        ResponseError^ _Error;
    };

	ref class Response::ResponseError : NativeWrapper<mbgl::Response::Error>
	{
	public:
        enum class ErrorReason : System::Byte
        {
            Success = 1,
            NotFound = 2,
            Server = 3,
            Connection = 4,
            RateLimit = 5,
            Other = 6,
        };

        ResponseError(ErrorReason reason, System::String^ message, System::Nullable<System::DateTime> retryAfter);
        ~ResponseError();

        property ErrorReason Reason { ErrorReason get(); System::Void set(ErrorReason value); }
        property System::String^ Message { System::String^ get(); System::Void set(System::String^ value); }
        property System::Nullable<System::DateTime> RetryAfter { System::Nullable<System::DateTime> get(); System::Void set(System::Nullable<System::DateTime> value); }
    internal:
        ResponseError(NativePointerHolder<mbgl::Response::Error>^ nativePointerHolder);
    };
}

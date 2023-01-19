#pragma once

#include <string>
#include <type_traits>

namespace mbgl {
namespace util {
template <typename = std::enable_if<!std::is_same<int64_t, long>::value>>
inline std::string toString(long t) {
    return toString(static_cast<int64_t>(t));
}
}
}

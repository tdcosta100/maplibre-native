#include <mbgl/util/platform.hpp>
#include <mbgl/platform/thread.hpp>
#include <mbgl/util/logging.hpp>

#include <string>

#ifdef _MSC_VER
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN 1
#endif
#include <Windows.h>
#endif
#include <pthread.h>
#include <sched.h>
#ifdef __linux__
#include <sys/resource.h>
#endif

namespace mbgl {
namespace platform {

std::string getCurrentThreadName() {
    char name[32] = "unknown";
#if defined(__linux__) || defined(_MSC_VER)
    pthread_getname_np(pthread_self(), name, sizeof(name));
#endif

    return name;
}

void setCurrentThreadName(const std::string& name) {
#if defined(__linux__) || defined(_MSC_VER)
    if (name.size() > 15) { // Linux hard limit (see manpages).
        pthread_setname_np(pthread_self(), name.substr(0, 15).c_str());
    } else {
        pthread_setname_np(pthread_self(), name.c_str());
    }
#endif
}

void makeThreadLowPriority() {
#ifdef SCHED_IDLE
    struct sched_param param;
    param.sched_priority = 0;

    if (sched_setscheduler(0, SCHED_IDLE, &param) != 0) {
        Log::Warning(Event::General, "Couldn't set thread scheduling policy");
    }
#endif
}

void setCurrentThreadPriority(double priority) {
#ifdef _MSC_VER
    if (!SetThreadPriority(GetCurrentThread(), int(priority))) {
        Log::Warning(Event::General, "Couldn't set thread priority");
    }
#else
    if (setpriority(PRIO_PROCESS, 0, int(priority)) < 0) {
        Log::Warning(Event::General, "Couldn't set thread priority");
    }
#endif

#ifdef SCHED_OTHER
    struct sched_param param;
    param.sched_priority = 0;
    if (sched_setscheduler(0, SCHED_OTHER, &param) != 0) {
        Log::Warning(Event::General, "Couldn't set thread scheduling policy");
    }
#endif
}

void attachThread() {}

void detachThread() {}

} // namespace platform
} // namespace mbgl

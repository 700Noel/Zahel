#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Zahel {

	class ZAHEL_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define ZH_CORE_TRACE(...)  ::Zahel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ZH_CORE_INFO(...)   ::Zahel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ZH_CORE_WARN(...)   ::Zahel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ZH_CORE_ERROR(...)  ::Zahel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ZH_CORE_FATAL(...)  ::Zahel::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define ZH_TRACE(...)   ::Zahel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ZH_INFO(...)    ::Zahel::Log::GetClientLogger()->info(__VA_ARGS__)
#define ZH_WARN(...)    ::Zahel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ZH_ERROR(...)   ::Zahel::Log::GetClientLogger()->error(__VA_ARGS__)
#define ZH_FATAL(...)   ::Zahel::Log::GetClientLogger()->fatal(__VA_ARGS__)
#include "Log.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace Zahel {

	std::shared_ptr<spdlog::logger> s_CoreLogger;
	std::shared_ptr<spdlog::logger> s_ClientLogger;

	void Log::Init() 
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");

		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger->set_level(spdlog::level::trace);
	}
}

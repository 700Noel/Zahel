#include "zhpch.h"
#include "Log.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace Zahel {

	void Log::Init() 
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");

		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger->set_level(spdlog::level::trace);
	}
}

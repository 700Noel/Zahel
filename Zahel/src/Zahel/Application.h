#pragma once

#include "Core.h"

namespace Zahel {

	class ZAHEL_API Application
	{
	public :
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Zahel/Log.h"

namespace Zahel {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run() 
	{
		WindowResizeEvent e(1280, 720);
		ZH_TRACE(e);

		while (true);
	}
}
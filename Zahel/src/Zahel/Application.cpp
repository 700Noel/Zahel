#include "zhpch.h"
#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

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
		if (e.IsInCategory(EventCategoryApplication))
		{
			ZH_TRACE(e.ToString());
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			ZH_TRACE(e.ToString());
		}
		while (true);
	}
}
#pragma once

#ifdef ZH_PLATFORM_WINDOWS

extern Zahel::Application* Zahel::CreateApplication();

int main(int argc, char** argv)
{

	Zahel::Log::Init();

	auto app = Zahel::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif
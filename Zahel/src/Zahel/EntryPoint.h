#pragma once

#ifdef ZH_PLATFORM_WINDOWS

extern Zahel::Application* Zahel::CreateApplication();

int main(int argc, char** argv)
{

	Zahel::Log::Init();
	ZH_CORE_WARN("initialized Log!");
	int a = 5;
	ZH_INFO("Hello Var={0}", a);

	auto app = Zahel::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif
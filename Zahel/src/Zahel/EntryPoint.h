#pragma once
#ifdef ZH_PLATFORM_WINDOWS

extern Zahel::Application* Zahel::CreateApplication();

int main(int argc, char** argv)
{
	printf("Zahel Engine!");
	auto app = Zahel::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif
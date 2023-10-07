
#include <Zahel.h>

class Sandbox : public Zahel::Application
{
public:
	Sandbox() 
	{

	}

	~Sandbox()
	{

	}
};


Zahel::Application* Zahel::CreateApplication() 
{
	return new Sandbox();
}
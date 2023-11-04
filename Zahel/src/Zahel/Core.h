#pragma once


#ifdef ZH_PLATFORM_WINDOWS
	#ifdef ZH_BUILD_DLL
		#define ZAHEL_API __declspec(dllexport)
	#else
		#define ZAHEL_API __declspec(dllimport)
	#endif 
#else
	#error Zahel only supports Windows!
#endif 

#ifdef ZH_ENABLE_ASSERTS
	#define ZH_ASSERT(x, ...) { if(!(x)) { ZH_ERROR("Assertion Fialed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define ZH_CORE_ASSERT(x, ...) { if(!(x) { ZH_CORE_ERROR("Assertion Fialed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define ZH_ASSERT(x, ...)
	#define ZH_CORE_ASSERT(x, ...)
#endif


#define BIT(x) (1 << x)
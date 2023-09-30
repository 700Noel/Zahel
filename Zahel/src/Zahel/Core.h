#pragma once


#ifdef ZH_PLATFORM_WINDOWS
	#ifdef ZH_BUILD_DLL
		#define ZAHEL_API __declspec(dllexport)
	#else
		#define ZAHEL_API __declspec(dllimport)
	#endif // ZH_API_DLL
#else
	#error Zahel only supports Windows!
#endif 

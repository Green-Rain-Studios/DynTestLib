#pragma once

#if defined(_WIN32) || defined(__CYGWIN__)
	#ifdef BUILDING_DYNTESTLIB
		#define DYNTESTLIB_API __declspec(dllexport)
	#else
		#define DYNTESTLIB_API __declspec(dllimport)
	#endif
#else
	#if __GNUC__ >= 4
		#define DYNTESTLIB_API __attribute__ ((visibility("default")))
	#else
		#define DYNTESTLIB_API
	#endif
#endif

extern "C"
{
	DYNTESTLIB_API const char* char_echo(const char* input);
    
	DYNTESTLIB_API int add_int(const int& a, const int& b);
	DYNTESTLIB_API float add_float(const float& a, const float& b);
	DYNTESTLIB_API double add_double(const double& a, const double& b);

	DYNTESTLIB_API int multiply_int(const int& a, const int& b);
	DYNTESTLIB_API float multiply_float(const float& a, const float& b);
	DYNTESTLIB_API double multiply_double(const double& a, const double& b);
}

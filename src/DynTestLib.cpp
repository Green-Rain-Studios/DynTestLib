#include "DynTestLib.h"

extern "C" const char* char_echo(const char* input) {
	return input;
}

extern "C" int add_int(const int& a, const int& b) {
	return a + b;
}

extern "C" float add_float(const float& a, const float& b) {
	return a + b;
}

extern "C" double add_double(const double& a, const double& b) {
	return a + b;
}

extern "C" int multiply_int(const int& a, const int& b) {
	return a * b;
}

extern "C" float multiply_float(const float& a, const float& b) {
	return a * b;
}

extern "C" double multiply_double(const double& a, const double& b) {
	return a * b;
}

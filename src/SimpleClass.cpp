#include "SimpleClass.h"

std::string SimpleClass::echo(const std::string input)
{
	return char_echo(input.c_str());
}

int SimpleClass::add(int a, int b) {
	return add_int(a, b); // Call the C-style function
}

float SimpleClass::add(float a, float b) {
	return add_float(a, b); // Call the C-style function
}

double SimpleClass::add(double a, double b) {
	return add_double(a, b); // Call the C-style function
}

int SimpleClass::multiply(int a, int b) {
	return multiply_int(a, b); // Call the C-style function
}

float SimpleClass::multiply(float a, float b) {
	return multiply_float(a, b); // Call the C-style function
}

double SimpleClass::multiply(double a, double b) {
	return multiply_double(a, b); // Call the C-style function
}

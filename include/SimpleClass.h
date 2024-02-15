#pragma once

#include "DynTestLib.h"

#include <string>

class DYNTESTLIB_API SimpleClass
{
public:
	// Constructor and destructor if needed
	SimpleClass() = default;
	~SimpleClass() = default;

	// Wrapper methods
	std::string echo(const std::string input);
	
	int add(int a, int b);
	float add(float a, float b);
	double add(double a, double b);

	int multiply(int a, int b);
	float multiply(float a, float b);
	double multiply(double a, double b);
};

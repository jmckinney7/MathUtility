#ifndef MATH_UTILITY_H // Not needed but good practice.
#define MATH_UTILITY_H

extern "C" {
	_declspec(dllexport) double add(double x, double y); //addition
	_declspec(dllexport) double sub(double x, double y); //subtraction
	_declspec(dllexport) double mul(double x, double y); //multiplication
	_declspec(dllexport) double divide(double x, double y); //division
	_declspec(dllexport) int mod(int dividend, int divisor); //mod
}

#endif 
#include "MathUtility.h"
#include <cmath> // For NaN

// Adds two numbers
double add(double x, double y)
{
    return x + y;
}

// Subtracts the second number from the first
double sub(double x, double y)
{
    return x - y;
}

// Multiplies two numbers
double mul(double x, double y)
{
    return x * y;
}

// Divides the first number by the second number
double divide(double x, double y)
{
    //To handle if you divide by 0
    if (y == 0) return std::nan("");

    //Normal behavior
    return x / y;
}

// Returns the remainder of integer division
int mod(int dividend, int divisor)
{
    return dividend % divisor;
}

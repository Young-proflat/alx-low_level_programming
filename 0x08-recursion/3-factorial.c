#include "main.h"

/**
 * main.h : factorial of any number
 * @n: the numner we are to find
 * Return: void
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n-1));
}


#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		if (m != '2' && m != '4')
			
		else
			_putchar(m);
	}
	_putchar('\n');
}

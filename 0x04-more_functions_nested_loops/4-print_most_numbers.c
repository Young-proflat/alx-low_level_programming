#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return:
 */

void print_most_numbers(void)
{

    int m;
    for (m = '0'; m <= '9'; m++)
    {
        if (m != '2' && m != '4')
            putchar(m);
    }
    putchar('\n');
}

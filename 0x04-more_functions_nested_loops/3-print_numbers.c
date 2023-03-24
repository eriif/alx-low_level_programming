#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9
 * Return: the number from 0 upto 9
 */
void Print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

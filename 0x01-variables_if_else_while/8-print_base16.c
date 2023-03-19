#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)

{
	int d;
	char l;

	for (d = '0'; d <= '9'; d++)
		putchar(d);

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');

		return (0);
}

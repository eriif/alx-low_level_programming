#include<stdio.h>

/**
 * main - entry point of the program
 * Return: Always 0 (success)
 */
int main(void)
{
char l, e, q;

e = 'e';
q = 'q';

for (l = 'a'; l <= 'z'; l++)
{
	if (l != e && l != q)
		putchar(l);
}
putchar('\n');
return (0);
}

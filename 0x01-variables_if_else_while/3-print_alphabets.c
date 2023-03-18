#include<stdio.h>

/*
 * main - prints alphabet in lowercase and in uppercase
 * Return : always (0) success
 */

int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
		putchar(j);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
		return (0);
}

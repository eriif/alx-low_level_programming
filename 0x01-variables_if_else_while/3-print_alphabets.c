#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
 * main - entry point of the program
 * Return: Always 0 (success)
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

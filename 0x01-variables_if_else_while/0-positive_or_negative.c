#include<stdlib.h>
#include<time.h>
#include<stdio.h>


/**
 *main:Prints if number is positive,zero or negative
 * a c program that assigns a random number to the variable n
 * betty style doc for function main goes there
 *Return: Always 0 (success)
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
		return (0);
}

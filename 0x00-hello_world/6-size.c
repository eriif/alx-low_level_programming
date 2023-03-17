#include<stdio.h>
/*
 *main-entry
 * program that outputs the size of various computer types
 *
 * return 0 (success)
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int d;
	float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

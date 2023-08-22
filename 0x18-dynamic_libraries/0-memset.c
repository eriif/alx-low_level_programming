#include "main.h"
/**
* _memset - Entry point
* @s: pointed distination
* @b: desired value
* @n: bytes to be changed
* Return: Always 0 (success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}

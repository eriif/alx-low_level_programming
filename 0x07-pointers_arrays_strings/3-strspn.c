#include "main.h"

/**
* _strspn - entry point
* @s: input value
* @accept: input value
* Return: Always 0 (success)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
	for (index = 0; accept[index]; index++)
	{
	if (*s == accept[index])
	{
	bytes++;
	break;
	}

	else if (accept[index + 1] == '\0')
	return (bytes);
	}
	s++;
	}
	return (bytes);
}

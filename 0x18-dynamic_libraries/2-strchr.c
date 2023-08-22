#include <stdio.h>
#include "main.h"

/**
* _strchr - Entry point
* @s: input value
* @c: input value
* Return: Always 0 (success)
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	return (s + i);
	}
	return (NULL);
}

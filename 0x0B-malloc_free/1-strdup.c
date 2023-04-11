#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - Duplicate to new memory space location
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
	char *v;
	int i, r = 0;

	if (str == NULL)

	return (NULL);
	i = 0;

	while (str[i] != '\0')
	i++;
	v = malloc(sizeof(char) * (i + 1));
	if (v == NULL)
	return (NULL);
	for (r = 0; str[r]; r++)
	v[r] = str[r];
	return (v);
}

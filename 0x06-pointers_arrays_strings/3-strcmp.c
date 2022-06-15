#include "main.h"
#include <string.h>
/* #include <stdio.h> */

/**
 *_strcmp - function that compares two strings.
 *@s1: pointer caracter
 *@s2: pointer caracter
 *Return: integer of pointer type
 */

int _strcmp(char *s1, char  *s2)
{
	int i, output;

	i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s2 + i) && *(s1 + i) != '\0')
		i++;
	output = (*(s1 + i) - *(s2 + i));
	return (output);
}

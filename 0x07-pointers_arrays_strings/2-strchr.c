#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @c: character in a string
 * @s: string
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}

#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 1, count = 0;
	char p = s[0];

	while (p != '\0')
	{
		count++;
		p = s[i++];
	}
	return (count);
}

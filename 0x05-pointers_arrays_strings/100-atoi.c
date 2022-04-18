#include "holberton.h"

/**
 * _atoi - Entry point
 * @s: input
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int i;
	int res = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		res = res * 10 + s[i] - '0';
	}

	return (res);
}

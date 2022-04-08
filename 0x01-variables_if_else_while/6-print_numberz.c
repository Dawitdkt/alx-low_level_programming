#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Short description, single line
 * Description: Longer description of the function)?
 * Return: returns 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
		putchar((c % 10) + '0');
	putchar('\n');

	return (0);
}

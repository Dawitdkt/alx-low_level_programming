#include "main.h"
#include <stdio.h>
/**
 * print_times_table -  a function that prints the n times table,
 * starting with 0
 * rone = row, cone = column, d = digits of current result
 * @n: integer input
 * Return: If n is greater than 15 or less than 0 the function
 * should not print anything
 */
void print_times_table(int n)
{
	int rone, cone, d;

	if (n > 15 || n < 0)
	{}
	else
	{
		for (rone = 0; rone <= n; rone++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			for (cone = 1; cone <= n; cone++)
			{
				d = (rone * cone);
				if ((d / 10) > 0)
				{
					printf("%d", d);
				}
				else
				{
					_putchar(' ');
				}
				printf("%d", d);

				if (cone < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}

}

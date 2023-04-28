/*
 * File: 10-print_triangle.c
 * Auth: Najlae Abarghache
 */

#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i, index;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (index = size - i; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < i; index++)
				_putchar('#');

			if (i == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

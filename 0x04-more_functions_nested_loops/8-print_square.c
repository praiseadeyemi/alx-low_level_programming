#include "main.h"

/**
 * print_square- function that prints squares
 * @size: size of square
 * We can ony use _puchar to print and we are to use # to print square
 */

void print_square(int size)
{
	int x, y;

	y = 0

	if (size < 1)
		_ptchar('\n');

	while (y < size)
		{
		x = 0;
		while (x < size)
		{
			_putchar ('#');
			x++;
		}
		_putchar ('\n');
			y++;
		}


#include "main.h"

/**
 * _puts - print string follow by new line
 * @str: char to check
 * Owned by Steveric1
 * Return: 0 on success
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

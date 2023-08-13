#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - digit function
 * @c: character to check
 *
 * Return: 0 on success
 */

int is_digit(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

/**
 * str_len - calculate the length of string
 * @str: string to calculate
 *
 * Return: length of string
 */

int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * validateArgument - check if the correct argument is passed
 * @argc: size
 * @argv: array
 *
 * Return: 0 on success
 */

int validateArgument(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < str_len(argv[i]); j++)
		{
			if (!is_digit(argv[i][j]))
			{
				printf("Error\n");
				exit(0);
			}
		}
	}

	return (0);
}

/**
 * multiplyArgument - multipy the numbers
 * @num1: character
 * @num2: character
 *
 * Return: result
 */

int multiplyArgument(char *num1, char *num2)
{
	int n1 = atoi(num1);
	int n2 = atoi(num2);
	int result = n1 * n2;

	return (result);
}

/**
 * main - check the code
 * @argc: size
 * @argv: array
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int result;

	validateArgument(argc, argv);
	result = multiplyArgument(argv[1], argv[2]);
	printf("%d\n", result);

	return (0);
}

#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - function that concantenate all program
 * @ac: size
 * @av: array of string
 * Return: pointer to char
 */

char *argstostr(int ac, char **av)
{
	int length, i, index;
	char *concatenate;

	if (ac == 0 || av == 0)
		return (NULL);

	length = 0;
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}

	concatenate = (char *)malloc(length * sizeof(char) + 1);

	if (concatenate == NULL)
		return (NULL);

	index = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(concatenate + index, av[i]);
		index += strlen(av[i]);
		concatenate[index] = '\n';
		index++;
	}

	concatenate[index] = '\0';

	return (concatenate);
}

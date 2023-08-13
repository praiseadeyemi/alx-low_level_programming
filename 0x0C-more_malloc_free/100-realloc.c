#include <stdio.h>
#include "main.h"

/**
 * _realloc - function that reallocate memory
 * @ptr: the old memory
 * @old_size: memory old size
 * @new_size: memory new size
 *
 * Return: the new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr = ptr;
	unsigned int i, n = new_size;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		n = old_size;

	for (i = 0; i < n; i++)
		new_ptr[i] = old_ptr[i];
	free(ptr);

	return (new_ptr);
}

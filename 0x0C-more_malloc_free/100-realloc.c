#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocate memory for a block of data.
 * @ptr: A pointer to the old memory block.
 * @old_size: The size of the old memory block.
 * @new_size: The size of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new = NULL;
	unsigned int i, min_size = old_size;

	ptr_new = malloc(new_size);

	if (ptr == NULL)
	{
		return (ptr_new);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		else if (old_size > new_size)
		{
			min_size = new_size;
		}
		else if (old_size == new_size)
		{
			return (ptr);
		}
		for (i = 0; i < min_size; i++)
		{
			*((char *)ptr_new + i) = *((char *)ptr + i);
		}
		free(ptr);
	}
	return (ptr_new);
}

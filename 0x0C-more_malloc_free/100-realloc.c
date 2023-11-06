#include "main.h"
#include <stdlib.h>
#include <string.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size  == 0 && ptr != NULL)
	{
		free (ptr);
		return (NULL);
	}
	free (ptr);
	return (ptr);
}

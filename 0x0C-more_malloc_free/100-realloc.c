#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: Size of the new memory block in bytes.
 * Return: Pointer to the newly allocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
gnsigned int n_size = (old_size < new_size) ? old_size : new_size;
void *w_ptr = malloc(new_size);

if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
	;
		return (malloc(new_size));
if (new_size == old_size)
return (ptr);
if (w_ptr == NULL)
return (NULL);
memcpy(w_ptr, ptr, n_size);
free(ptr);
return (w_ptr);
}

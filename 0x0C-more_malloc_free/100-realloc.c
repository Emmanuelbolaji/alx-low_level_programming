#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: Pointer to the previous memory
 * @old_size: Size of the old memory
 * @new_size: Size of the new memory
 * Return: Pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *nw_ptr = malloc(new_size);
size_t mn_size = (old_size < new_size) ? old_size : new_size;

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
return (malloc(new_size));
}

if (new_size == old_size)
{
return (ptr);
}
if (nw_ptr == NULL)
{
return (NULL);
}

memcpy(nw_ptr, ptr, mn_size);
free(ptr);
return (nw_ptr);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocate memory block.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: Size of the new memory block in bytes.
 *
 * Return: Pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr = malloc(new_size);
unsigned int min_size = (old_size < new_size) ? old_size : new_size;

if (new_size == 0)
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
if (new_ptr == NULL)
{
return (NULL);
}    
memcpy(new_ptr, ptr, min_size);
free(ptr);
return (new_ptr);
}

#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function returns pointer to newly allocated space in memory
 * @str: the string to be copied
 * Return: NULL on failure, returns new string on success
 */

char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *new_str = (char *)malloc(len + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);

	return (new_str);
}

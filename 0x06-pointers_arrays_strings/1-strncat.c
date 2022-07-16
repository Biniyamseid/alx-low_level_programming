#include "main.h"
#include <string.h>

/**
 * _strncat - This function concatenate two strin: Integer variable passed by value
 *
 * Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, lenDest;

	lenDest = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lenDest + i] = src[i];
	}
	dest[lenDest + i] = '\0';
	return (dest);
}

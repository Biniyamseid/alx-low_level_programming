#include <string.h>
#include "main.h"

/** * @n: n
 *
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, lenDest;

	lenDest = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		if (n < lenDest)
			dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

#include <string.h>
#include "main.h"

/**
  */
char *string_toupper(char *stri)
{
	int i, len;

	len = strlen(stri);

	for (i = 0; i <  len && stri[i] != '\0'; i++)
	{
		if (stri[i] > 96 && stri[i] < 123)
			stri[i] -= 32;
	}
	return (stri);
}

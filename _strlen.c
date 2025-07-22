#include "main.h"

int _strlen(char *a)
{
	int x = 0;

	while (a[x] != '\0')
	{
		x++;
	}

	return (x);
}

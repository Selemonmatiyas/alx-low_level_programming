#include "main.h"
char *_strcpy(char *dest, char *src)
{
int i = 0;

for (; src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
	return (dest);
}
int _atoi(char *s)
{
	return 0;
}
char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}
	return (dest);
}
char *_strncat(char *dest, char *src, int n)
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[i + co] = src[co];
		if (src[co] == '\0')
			co = n;
	}
	return (dest);
}

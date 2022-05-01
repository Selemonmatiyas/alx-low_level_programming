#include "main.h"
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
void _puts(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
	 	_putchar(str[i]);
	}
	_putchar('\n');
}

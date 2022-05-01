#include "main.h"
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}

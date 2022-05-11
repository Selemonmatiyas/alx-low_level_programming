#include <stdlib.h>
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: pointer to the first character of the string
 *
 * Return: Value of integer in string
 */
int _atoi(char *s)
{
	unsigned int num;
	int neg;

	neg = 1;
	num = 0;

	for (; *s; s++)
	{
		if (*s >= '0' && *s <= '9')
		{
			num *= 10;
			num += *s - '0';
		}
		else if (num > 0)
		{
			break;
		}
		else if (*s == '-')
		{
			neg = -neg;
		}
	}

	return (num * neg);
}

/**
 * main -Prints the opcodes of its own main function
 * @argc: Number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 for success, otherwise 1
 */
int main(int argc, char **argv)
{
	char *src =
		"554889e54883ec20897dec488975e048c745f808084000837dec027414bfc8094000e819";
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = _atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n"):
		exit(1);
	}

	for (i = 0; src[i] && i / 2 < n; i += 2)
	{
		if (i != 0)
			printf(" ");
		printf("%c%c", src[i], src[i + 1]);
	}
	printf("\n");

	return (0);
}

/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

<<<<<<< HEAD
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
=======
  for (x = 0; x < n && src[x] != '\0'; x++)
    {
      dest[x] = src[x];
    }
  for ( ; x < n; x++)
    {
      dest[x] = '\0';
    }
  return (dest);
>>>>>>> 75aefafcf656d8bbfb4b44e2fbd92fa621afebb4
}

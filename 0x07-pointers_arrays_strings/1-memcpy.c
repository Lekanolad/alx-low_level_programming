/**
 * _memcpy - copies memory area
 * @dest: memory area copy holder
 * @src: memory area source to copy
 * @n: number of bytes to copy from src
 * Return: pointer to copied bytes in dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *q = dest;

	while (n)
	{
		*dest++ = *src++;
		n--;
	}
	return (q);
}

#include "main.h"

/**
 * _memcpy - functions copies @n bytes from mmory area @src
 * to memory area @dest
 *
 * @n: function copies
 * @src: bytes for memory area
 * @dest: to memery area
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}

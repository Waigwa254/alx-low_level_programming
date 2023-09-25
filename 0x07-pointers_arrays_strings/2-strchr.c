#include "main.h"

/**
 * _strchr - locates a character ina string
 * @s: the string to be searched
 * @c: the character to be located
 *
 * Return: null if c isnot found
 */
char *_strchr(char *s, char c)
{
int index;
for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}
return ('\0');
}

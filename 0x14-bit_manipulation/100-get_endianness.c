#include "main.h"

/**
 * get_endianness - ediannesss is chekked by prog
 * Return: 0
 */
int get_endianness(void)
{
int a;
char *b;
a = 1;
b = (char *)&a;
return (*b);
}

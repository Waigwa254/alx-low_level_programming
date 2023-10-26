#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sedts value of bit to 0
 * @n: parameeeter
 * @index: idx
 * Return: 1 if succeas
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
return (-1);
*n &= ~(1 << index);
return (1);
}



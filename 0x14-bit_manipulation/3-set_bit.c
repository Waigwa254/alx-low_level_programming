#include "main.h"

/**
 * set_bit - prog setss bit 1 to a given idx
 * @n: no to sett
 * @index: index where a bit is set
 * Return: 1 if succes
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int setbit;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
setbit = 1 << index;
*n = *n | setbit;
return (1);
}

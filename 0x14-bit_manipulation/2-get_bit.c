#include "main.h"

/**
 * get_bit - progg rtns value of it in a given idx
 * @n: number thar checks bits
 * @index: idx which bit is checked
 * Return: value of bitt
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int divisor, check;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
divisor = 1 << index;
check = n & divisor;
if (check == divisor)
return (1);
return (0);
}

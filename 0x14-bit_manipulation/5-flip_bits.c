#include "main.h"

/**
 * flip_bits - counts no of biits to chng
 * @n: 1 number
 * @m: 2 numberr
 * Return: no of biits to chng
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int a, countbit = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (a = 63; a >= 0; a--)
{
current = exclusive >> a;
if (current & 1)
countbit++;
}
return (countbit);
}

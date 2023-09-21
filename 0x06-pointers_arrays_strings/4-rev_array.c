#include "main.h"

/**
 * reverse_array - function that reverses contents ina an array
 * @a: pointer string
 * @n: number of elements
 *
 * Return: void .
 */
void reverse_array(int *a, int n)
{
int temporary, counter;
n = n - 1;
counter = 0;
while (counter <= n)
{
temporary = a[counter];
a[counter++] = a[n];
a[n--] = temporary;
}
}

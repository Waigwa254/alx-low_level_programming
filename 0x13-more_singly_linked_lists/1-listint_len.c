#include "lists.h"

/**
 * listint_len - number of elements is returned in linked list
 * @h: linked list of type listint
 * Return: node numbers
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}

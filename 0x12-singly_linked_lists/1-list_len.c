#include "lists.h"

/**
 * list_len - finding length of list
 * @h: head node
 * Return: length of node
 */
size_t list_len(const list_t *h)
{
size_t nodes = 0;
while (h != NULL)
{
h = h->next;
nodes++;
}
return (nodes);
}

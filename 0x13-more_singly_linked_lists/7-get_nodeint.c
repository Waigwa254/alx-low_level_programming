#include "lists.h"

/**
 * get_nodeint_at_index - at linked lisdt a node is returned in a certain index
 * @head: first node
 * @index: node to return
 *
 * Return: pointer to the nedr
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}

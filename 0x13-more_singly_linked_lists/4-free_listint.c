#include "lists.h"

/**
 * free_listint -linked list is freed
 * @head: listint_t list to be freeed
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}

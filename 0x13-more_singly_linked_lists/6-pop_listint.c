#include "lists.h"

/**
 * pop_listint - the head node is deleted int the linked list
 * @head: pointr to the first element
 * Return: data insid elements tahat was deleted or
 * 0 if thr list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}

#include "lists.h"

/**
 * add_nodeint - adds a new node in linjeslist beginning
 * @head: points the first node in the list
 * @n: data to insery the new node
 * Return: pointer t the new node or null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}

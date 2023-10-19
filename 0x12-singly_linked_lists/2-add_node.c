#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add node at beginning
 * @head: head node
 * @str: str to store
 * Return: address of new element or null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
unsigned int i, count = 0;
newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);
newnode->str = strdup(str);
for (i = 0; str[i] != '\0'; i++)
count++;
newnode->len = count;
newnode->next = *head;
*head = newnode;
return (*head);
}

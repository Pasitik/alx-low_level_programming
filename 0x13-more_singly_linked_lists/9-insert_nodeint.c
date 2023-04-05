#include "lists.h"

/**
 * insert_nodeint_at_index - ...
 *
 * @head: ...
 * @idx: ...
 * @n: ...
 * Return: ...
 */
listint_t *insert_nodeint_at_index(listint_t **head,
unsigned int idx, int n)
{
listint_t *newNode;
listint_t *temp = *head;
unsigned int pos = 0;



newNode = (listint_t *) malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}

while (pos < idx - 1)
{
temp = temp->next;
pos++;
}
newNode->n = n;
newNode->next = temp->next;
temp->next = newNode;
return (temp->next);
}

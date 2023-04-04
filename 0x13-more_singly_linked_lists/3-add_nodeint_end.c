#include "lists.h"

/**
 * add_nodeint_end - ...
 *
 * @head: ...
 * @n: ...
 * Return: ...
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode;
listint_t *temp = *head;
newNode = (listint_t *) malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

if (*head == NULL)
{
*head = newNode;
return (newNode);
}

while (temp->next != NULL)
{
temp = temp->next;
}
newNode->n = n;
newNode->next = NULL;
temp->next = newNode;
return (newNode);
}


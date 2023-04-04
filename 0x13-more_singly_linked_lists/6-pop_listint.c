#include "lists.h"

/**
 * pop_listint - ..
 *
 * @head: ...
 * Return: ...
 */
int pop_listint(listint_t **head)
{
int value;
listint_t *temp = *head;

if (head == NULL || *head == NULL)
return (0);
*head = (*head)->next;
value = temp->n;
free(temp);
return (value);
}

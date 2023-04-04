#include "lists.h"

/**
 * pop_listint - ..
 *
 * @head: ...
 * Return: ...
 */
int pop_listint(listint_t **head)
{
listint_t *temp = *head;
if (*head == NULL)
return (0);
*head = (*head)->next;
return (temp->n);
}

#include "lists.h"

/**
 * sum_listint - ...
 *
 * @head: ...
 * Return: ...
 */
int sum_listint(listint_t *head)
{
listint_t *temp = head;
int sum = 0;

if (head == NULL)
return (0);
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}

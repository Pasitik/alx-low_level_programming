#include "lists.h"

/**
 * get_nodeint_at_index - ...
 *
 * @head: ...
 * @index: ...
 * Return: ...
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp = head;
unsigned int count = 1;

if (temp != NULL && head == NULL)
return (NULL);

while (count < index)
{
temp = temp->next;
count++;
}
return (temp->next);
}

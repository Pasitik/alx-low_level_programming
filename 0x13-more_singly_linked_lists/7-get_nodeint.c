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
unsigned int count = 0;

if (head == NULL)
return (NULL);

while (temp !=NULL && count < index)
{
temp = temp->next;
count++;
}
return (temp->next);
}

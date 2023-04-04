#include "lists.h"

/**
 * print_listint - ...
 *
 * @h: ...
 * Return: ...
 */
size_t print_listint(const listint_t *h)
{
const listint_t *temp = h;
size_t count = 0;

if (h == NULL)
return (0);
while (temp != NULL)
{
printf("%d\n", temp->n);
count++;
temp = temp->next;
}
return (count);
}

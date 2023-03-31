#include "lists.h"

/**
 * add_node_end - ...
 *
 * @head: ...
 * @str: ...
 * Return: ...
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last_node;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = NULL;

    /* if list is empty, make new node the head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

    /* find last node and update its next pointer */
last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}
last_node->next = new_node;

return (new_node);
}


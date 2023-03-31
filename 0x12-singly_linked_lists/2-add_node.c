# include "lists.h"

/**
 * add_node -  00....
 *
 * @head: ...
 * @str: ...
 * Return: ...
 */
list_t *add_node(list_t **head, const char *str)
{
char *str_copy;

list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);

}

str_copy = strdup(str);
if (str_copy == NULL)
{
free(new_node);
return (NULL);

}
new_node->str = str_copy;
new_node->len = _strlen(str);
new_node->next = *head;
*head = new_node;

return (new_node);
}

/**
 * _strlen - ...
 *
 * @s: ...
 * Return: ...
 */
int _strlen(const char *s)
{
int c = 0;

while (*s)
{
s++;
c++;
}
return (c);
}

#ifndef _LINKED_LIST
#define _LINKED_LIST

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct node - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for alx project
 */
typedef struct node
{
	char *str;
	unsigned int len;
	struct node *next;
}
list_t;

int _putchar(char c);
int _strlen(const char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif /* MAIN_H */

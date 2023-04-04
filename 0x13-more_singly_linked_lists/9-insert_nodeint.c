#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: pointer to pointer to the first element of the list.
* @idx: index where the new node should be inserted.
* @n: value of the new node.
*
* Return: pointer to the new node or NULL if it fails.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *prev_node, *current_node;
unsigned int i = 0;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
current_node = *head;

if (idx == 0)
{

new_node->next = current_node;
*head = new_node;
return (new_node);
}

while (current_node != NULL && i < idx)
{
i++;
prev_node = current_node;
current_node = current_node->next;
}

if (i < idx)
return (NULL);

prev_node->next = new_node;
new_node->next = current_node;

return (new_node);
}



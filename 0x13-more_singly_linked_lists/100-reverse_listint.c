#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer to the first element of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev_node = NULL, *current_node = *head, *next_node;

while (current_node != NULL)
{
next_node = current_node->next;
current_node->next = prev_node;
prev_node = current_node;
current_node = next_node;
}

*head = prev_node;
return (*head);
}

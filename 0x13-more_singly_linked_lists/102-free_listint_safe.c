#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a linked list, handling loops
 * @head: pointer to a pointer to the first element of the list
 *
 * Return: The number of nodes in the list that were freed
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *slow_node, *fast_node;
	size_t node_count = 0;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	slow_node = *head;
	fast_node = (*head)->next;

	while (fast_node != NULL && fast_node < slow_node)
	{
		slow_node = slow_node->next;
		fast_node = fast_node->next;
	}

	while (slow_node != NULL)
	{
		node_count++;
	if (slow_node == *head)
	{
		*head = NULL;
	}
	fast_node = slow_node->next;
	free(slow_node);
	slow_node = fast_node;
	}

	return (node_count);
}

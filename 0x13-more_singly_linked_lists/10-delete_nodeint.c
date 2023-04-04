#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list of a given index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeds, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
	*head = current_node->next;
	free(current_node);
	return (1);
	}

	while (current_node != NULL && i < index)
	{
		i++;
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (-1);

	prev_node->next = current_node->next;
	free(current_node);

	return (1);
}

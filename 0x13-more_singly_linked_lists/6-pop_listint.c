#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: Double pointer to the head of the list
 *
 * Return: The head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
* print_listint_safe - prints a linked list, handling loops
* @head: pointer to the first element of the list.
*
* Return: the number of nodes in the list.
*/

size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow_node, *fast_node;
size_t node_count = 0;

if (head == NULL)
{
printf("NULL\n");
return (0);
}

slow_node = head;
fast_node = head;

while (fast_node != NULL && fast_node->next != NULL)
{
printf("[%p] %d\n", (void *) slow_node, slow_node->n);
node_count++;
slow_node = slow_node->next;
fast_node = fast_node->next->next;

if (slow_node == fast_node)
{
printf("[%p] %d\n", (void *) slow_node, slow_node->n);
node_count++;
printf("-> [%p] %d\n", (void *) slow_node->next, slow_node->next->n);
node_count++;
break;
	}
}

while (slow_node != fast_node)
{
printf("[%p] %d\n", (void *) slow_node, slow_node->n);
node_count++;
slow_node = slow_node->next;
}

printf("[%p] %d\n", (void *) slow_node, slow_node->n);
node_count++;

return (node_count);
}

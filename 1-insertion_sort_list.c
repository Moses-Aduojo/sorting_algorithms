#include "sort.h"

/**
 * insertion_sort_list - sort elements of a doubly linked list in
 * ascending order of magnitude
 * @list: pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *temp, *tracker = NULL;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		tracker = current;
		while (current->prev != NULL && current->n < current->prev->n)
		{
			temp = current->prev;
			current->prev = temp->prev;
			temp->prev = current;
			temp->next = current->next;
			if (temp->next != NULL)
				temp->next->prev = temp;
			if (current->prev != NULL)
				current->prev->next = current;
			else
				*list = current;
			current->next = temp;
			print_list(*list);
		}
		current = tracker->next;
	}
}

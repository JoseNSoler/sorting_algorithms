#include "sort.h"

/**
 * insertion_sort_list - sort with insertion method on a double linked list
 * @list: double linked list to analyze
 *
 * Return: void function
 * Prints every swap
 */

void insertion_sort_list(listint_t **list)
{
	int n;
	listint_t *current_n;

	current_n = *list;

	if (current_n->next == NULL)
		return;

	listint_t *pointer = NULL, *tempo = NULL;

	current_n = current_n->next;

	while (current_n != NULL)
	{
		n = 0;
		pointer = current_n;
		tempo = current_n->prev;
		current_n = current_n->next;

		while (tempo != NULL && tempo->n > pointer->n)
		{
			n++;
			tempo = tempo->prev;
		}

		if (n)
		{
			pointer->prev->next = pointer->next;
			if (pointer->next != NULL)
			pointer->next->prev = pointer->prev;

			if (tempo == NULL)
			{
				tempo  = *list;
				pointer->prev = NULL;
				pointer->next = tempo;
				pointer->next->prev = pointer;
				*list = pointer;
			}
			else
			{
				tempo = tempo->next;
				tempo->prev->next = pointer;
				pointer->prev = tempo->prev;
				tempo->prev = pointer;
				pointer->next = tempo;
			}
			print_list(*list);
		}
	}
}

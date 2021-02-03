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
	listint_t *tempo = NULL, *current = NULL, *n_tmp = NULL;

	if (!list)
		return;
	for (current = *list; current; current = current->next)
	{
		for (tempo = current->prev; tempo; tempo = tempo->prev)
		{
			if (current->n < tempo->n)
			{
				if (current->next)
					current->next->prev = tempo;
				tempo->next = current->next;
				n_tmp = tempo->prev;
				tempo->prev = current;
				current->next = tempo;
				current->prev = n_tmp;
				if (n_tmp)
					n_tmp->next = current;
				else
					*list = current;
				tempo = tempo->prev;
			}
			else
				break;
			print_list(*list);
		}
	}
}

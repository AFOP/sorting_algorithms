#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: double pointer array with the numbers
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *aux, *pointer;
	int flag = 1;

	if ((*list)->next == NULL || list == NULL || (*list) == NULL)
		return;
	pointer = (*list)->next;

	while (pointer)
	{
		temp = pointer;
		flag = 1;

		while (temp->prev != NULL && (temp->n < temp->prev->n))
		{
			aux = temp->prev->prev;
			if (aux)
				aux->next = temp;
			if (temp->next)
				temp->next->prev = temp->prev;
			temp->prev->prev = temp;
			temp->prev->next = temp->next;
			temp->next = temp->prev;
			temp->prev = aux;
			if (flag)
			{
				pointer = temp->next;
				flag = 0;
			}
			if (!temp->prev)
				*list = temp;
			print_list(*list);
		}
		pointer = pointer->next;
	}
}

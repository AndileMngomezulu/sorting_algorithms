#include "sort.h"
#include <stdio.h>

/**
  * print_list - print a list of integers
  * @list: list to be printed
  */
void ptint_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}

#include <stdlib.h>
#include "lists.h"

void free_list(list_t *head1)
{
	list_t *temp;

	while (head1)
	{
		temp = head1->next;
		free(head1->str);
		free(head1);
		head1 = temp;
	}
}


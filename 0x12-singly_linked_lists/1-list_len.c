
#include <stdlib.h>
#include "lists.h"

size_t list_len(const list_t *b)
{
	size_t a = 0;

	while (b)
	{
		a++;
		b = b->next;
	}
	return (a);
}


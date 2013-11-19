#include "../include/comp_list.h"

comp_list_t *Initialize()
{
	return NULL;
}

comp_list_t *InsertEnd(comp_list_t *list, void *value)
{
	comp_list_t *aux = list;
	if (aux == NULL)
	{
		comp_list_t *new = (comp_list_t*) malloc(sizeof(comp_list_t));
		new->value = value;
		new->next = NULL;
		return new;
	}
	else
	{
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		comp_list_t *new = (comp_list_t*) malloc(sizeof(comp_list_t));
		new->value = value;
		new->next = NULL;
		return list;
	}
}

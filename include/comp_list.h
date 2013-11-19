#include <stdlib.h>
#ifndef COMP_LIST_H
#define COMP_LIST_H
typedef struct comp_list comp_list_t;

struct comp_list
{
	void* value;
	comp_list_t *next;
};

comp_list_t *Initialize();
comp_list_t *InsertEnd(comp_list_t *list, void *value);
comp_list_t *InsertBegin(comp_list_t *list, void *value);
comp_list_t *InsertAt(comp_list_t *list, void *value, int index);
comp_list_t *Remove(comp_list_t *list, void *value);
comp_list_t *Update(comp_list_t *list, void *oldValue, void *newValue);
comp_list_t *ItemAt(comp_list_t *list, int index);

#endif

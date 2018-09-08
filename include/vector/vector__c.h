#pragma once
#include <stdlib.h> // for malloc,calloc,free,realloc
#include <stddef.h>
typedef struct _datastruct
{
	void *data;
	struct _datastruct *next;
	struct _datastruct *prev;
}datastruct;
typedef struct 
{
	datastruct *data_vec;
	datastruct *top_el;
	size_t size;
	size_t size_el;
	char *name;
	
}vector;
/* reserve and init */
#define init_res_vector_ptr(size,type,namevec)\ 
	namevec->size_el=sizeof(type);
	namevec->size=size;
	namevec->name=#namevec;
#define init_res_vector(size,type,namevec)\ 
	namevec.size_el=sizeof(type);\
	namevec.size=size;
	namevec.name=#namevec;
int push_el(vector *vec)
{
	
	vec->top_el->next=((void*)0);
	vec->top_el->next = malloc(vec->size_el);
	if(vec->top_el->next == ((void*)0)) //...
}

void del_el(vector *vec)

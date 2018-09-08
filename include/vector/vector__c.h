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
	char err_mem;
}vector;
/* reserve and init */
void reserve_func(vector *vec,size_t size)
{
	int it;
	int check_it;
	//top_el=NULL;
	if(size > 0)
	{
		top_el=datavec=NULL;
		top_el = malloc(sizeof(vec->size_el));
		if(top_el == NULL)
		{
			return 0;
		}
		
		for(it=0;it<size;it++)
		{
			top_el->next=NULL;
			top_el->next = malloc(sizeof(vec->size_el));
			if(top_el->next == NULL)  break;
			top_el=top_el->next;
			
		}
	}
	if(it!=size-1)
	{
		vec->err_mem='y';
	}
	vec->err_mem='n';
	return;
	
}

#define init_res_vector_ptr(size,type,namevec)\
	reserve_func(namevec,size);\
	namevec->size_el=sizeof(type);\
	namevec->size=size;\
	namevec->name=#namevec;
#define init_res_vector(size,type,namevec)\
	reserve_func(namevec,size);\
	namevec.size_el=sizeof(type);\
	namevec.size=size;\
	namevec.name=#namevec;
int push_el(vector *vec)
{
	
	vec->top_el->next=NULL;
	vec->top_el->next = malloc(vec->size_el);
	if(vec->top_el->next == NULL) return 0;
	vec->top_el=vec->top_el->next;
	return 1;
}

void del_el(vector *vec)

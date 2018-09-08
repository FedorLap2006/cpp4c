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
void reserve_func(vector *vec,size_t size);

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
int push_el(vector *vec);

void del_el(vector *vec);

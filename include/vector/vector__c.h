#pragma once
#include <stdlib.h> // for malloc,calloc,free,realloc
#include <stddef.h>

typedef struct _datastruct
{
	void *data;
	struct _datastruct *next;
	struct _datastruct *prev;
}datastruct;

struct vector;

typedef struct 
{
	vector *sourse;
}iter;

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

#define init_res_vector(size,type,namevec)\
	reserve_func(namevec,size);\
	namevec->size_el=sizeof(type);\
	namevec->size=size;\
	namevec->name=#namevec;

//this macro inital vector

/*#define init_res_vector(size,type,namevec)\
	reserve_func(namevec,size);\
	namevec.size_el=sizeof(type);\
	namevec.size=size;\
	namevec.name=#namevec;
*/

vector* get_el(vector *vec,int index);
int push_el(vector *vec;
void pop_el(vector *vec);
void del_el(iter *deleted_el);

int size_vec(vector *vec);

void clear_vec(vector *vec);
aa

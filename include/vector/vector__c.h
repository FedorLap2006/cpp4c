#pragma once
#include <stddef.h>
typedef struct
{
	void *data;
	size_t size;
	char *name;
}vector;
/* reserve and init */
#define init_res_vector_ptr(size,type,namevec)\ 
	namevec->size=sizeof(type)*size;
	namevec->name=#namevec;
#define init_res_vector(size,type,namevec)\ 
	namevec.size=sizeof(type)*size;\
	namevec.name=#namevec;
///////////////////////////
/*init(0 el)*/
#define init_vector(type,namevec)\ 
	namevec.size=sizeof(type);\
	namevec.name=#namevec;
//////////////////////////

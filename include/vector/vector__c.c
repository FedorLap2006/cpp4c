#include "vector__c.h"


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

int push_el(vector *vec)
{
	
	vec->top_el->next=NULL;
	vec->top_el->next = malloc(vec->size_el);
	if(vec->top_el->next == NULL) return 0;
	vec->top_el=vec->top_el->next;
	return 1;
}

void pop_el(vector *vec)
{
	if(data_vec!=NULL)
	{
		if((vec->top->prev)!=NULL) vec->top=vec->top->prev;
		if(top!=NULL)
		{
			free(top->next);
		}
	}
	return;
}

vector* get_el(vector *vec,int index)
{
	vector *cur_vec = vec;
	//iter *ret_el;
	
	if(vector->size==0) return NULL;
	
	int it;
	for(it=0;it<index;it++)
	{
		cur_vec=cur_vec->next;
	}
	return cur_vec;
}

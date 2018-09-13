#include "string__c.h"

char* str_cat(char *str1,...)
{
	int strlen;
	int it;
	char* cur_str;
	char* ret_str;
	va_list arg_str;
	va_start(arg_str,str1);
	while(1)
	{
		cur_str=va_arg(arg_str,char*);
		if(cur_str == 0) break;
		str_len += sizeof(cur_str);
	}
	// copy sector

	ret_str =(char*)malloc(str_len);
	if(ret_str == NULL) return NULL;

	for(it=0;it<str_len;it++)
	{
		ret_str
	}
}

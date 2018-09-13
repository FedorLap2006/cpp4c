#pragma once
//#include
#include <stdarg.h> // for va_list
#include <stdlib.h> // for malloc,realloc,free

/*
typedef struct
{
	char *str;
}string_t;*/

//void init_string(string_t str);

typedef char* string_t;

#define init_str(str) =str;

//#define equal_cat(str,...) str##__VA_ARG__

//#define equal(str,...) = #equal_cat(str,__VA_ARG__) // ????
//#define equal_string(str,...) #str



char* str_cat(char *str,...);


#define equal_cat(str,...) =(string_t)str_cat(str,__VA_AGRS__); // hello,world,bla,bla -->> hello [__VA_ARG__] worldblabla [/] --->>>> "helloworldblabla"
#define equal(str) = str; // no use  = str




//#define equal_str(str,...) str_cat((char*)str,


//char* str_cat(char *str1,char* str2,...);
//void REPLACE(char *str1,char* str2,...);



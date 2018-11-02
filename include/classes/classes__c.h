#pragma once

#define CLASS_OWNER globl

#define class_(name,...)\
    #undef CLASS_OWNER              \
    #define CLASS_OWNER name        \
    typedef struct name             \
    {                               \
        void __init__(__VA_ARGS__)




#define enddef\
    #undef CLASS_OWNER\
    #define CLASS_OWNER globl\
    }

#define func

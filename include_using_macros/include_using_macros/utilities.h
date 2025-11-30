#pragma once

#define VERSION vx

#define INCLUDE_(v) EXPAND_(version_,v)
#define EXPAND_(p,v) STR_(p##v.h)
#define STR_(v) #v

struct some_struct { int a, b; const char* string; };
typedef struct some_struct some_struct;
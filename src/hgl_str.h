#ifndef _HGL_STR_H_
#define _HGL_STR_H_

#include <stdio.h>
#include <stdbool.h>

typedef struct {
    char   *p_chars;
    size_t length;

} hgl_str;

#define hgl_str( str ) (hgl_str){ str, sizeof(str) }
#define hgl_str_null() (hgl_str){ NULL, 0 }


bool
hgl_str_valid(hgl_str str);

#endif
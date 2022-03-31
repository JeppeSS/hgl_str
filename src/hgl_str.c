#include "hgl_str.h"


bool
hgl_str_valid(hgl_str str){
    return str.p_chars != NULL;
}


bool
hgl_str_equal(hgl_str a, hgl_str b){
    if(!hgl_str_valid(a) || !hgl_str_valid(b)){
        return false;
    }

    if(a.length != b.length){
        return false;
    }

    for(size_t i = 0; i < a.length; i++){
        if(a.p_chars[i] != b.p_chars[i]){
            return false;
        }
    }

    return true;
}

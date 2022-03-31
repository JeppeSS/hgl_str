#include <stdlib.h>

#include "hgl_str.h"

int
main(void){

    hgl_str valid = hgl_str("Test");
    hgl_str invalid = hgl_str_null();

    fprintf(stdout, "%d\n", hgl_str_valid(valid));
    fprintf(stdout, "%d\n", hgl_str_valid(invalid));

    return EXIT_SUCCESS;
}
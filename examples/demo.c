#include <stdlib.h>

#include "hgl_str.h"

int
main(void){

    hgl_str valid = hgl_str("Test");
    hgl_str invalid = hgl_str_null();

    fprintf(stdout, "Valid: %d\n", hgl_str_valid(valid));
    fprintf(stdout, "Valid %d\n", hgl_str_valid(invalid));

    hgl_str demo_txt = hgl_str("Demo");
    hgl_str demo_txt_2 = hgl_str("Demo");

    fprintf(stdout, "Equal: %d\n", hgl_str_equal(valid, invalid));
    fprintf(stdout, "Equal: %d\n", hgl_str_equal(valid, demo_txt));
    fprintf(stdout, "Equal: %d\n", hgl_str_equal(demo_txt, demo_txt_2));

    return EXIT_SUCCESS;
}
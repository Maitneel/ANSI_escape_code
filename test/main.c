#include <stdio.h>

#include "ansi_escape_code.h"
#include "test.h"

int main() {
    test_fore_ground(NULL);    
    test_back_ground();
    test_all_conbination();

    printf("%s%s", F_RESTET, B_RESTET);

}
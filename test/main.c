#include <stdio.h>

#include "ansi_escape_code.h"
#include "test.h"

int main() {
    test_fore_ground();    

    printf("%s%s", F_RESTET, B_RESTET);
}
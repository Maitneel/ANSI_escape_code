#include <stdio.h>

#include "ansi_escape_code.h"

#define print(COLOR) printf("%s %16s ", COLOR, #COLOR)

void test_fore_ground() {
    print(F_BLACK);
    print(F_RED);
    print(F_GREEN);
    print(F_YELLOW);
    print(F_BLUE);
    print(F_MAGENTA);
    print(F_CYAN);
    print(F_WHITE);
    printf("%s\n", F_RESTET);

    print(F_BRIGHT_BLACK);
    print(F_BRIGHT_RED);
    print(F_BRIGHT_GREEN);
    print(F_BRIGHT_YELLOW);
    print(F_BRIGHT_BLUE);
    print(F_BRIGHT_MAGENTA);
    print(F_BRIGHT_CYAN);
    print(F_BRIGHT_WHIT);
    printf("%s\n", F_RESTET);
}

void test_back_ground() {
    print(B_BLACK);
    print(B_RED);
    print(B_GREEN);
    print(B_YELLOW);
    print(B_BLUE);
    print(B_MAGENTA);
    print(B_CYAN);
    print(B_WHITE);
    printf("%s\n", B_RESTET);

    print(B_BRIGHT_BLACK);
    print(B_BRIGHT_RED);
    print(B_BRIGHT_GREEN);
    print(B_BRIGHT_YELLOW);
    print(B_BRIGHT_BLUE);
    print(B_BRIGHT_MAGENTA);
    print(B_BRIGHT_CYAN);
    print(B_BRIGHT_WHIT);
    printf("%s\n", B_RESTET);
}

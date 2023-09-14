#include <stdio.h>

#include "ansi_escape_code.h"

#define print(COLOR) printf("%s %16s ", COLOR, #COLOR)

int main() {
    print(F_BLACK);
    print(F_RED);
    print(F_GREEN);
    print(F_YELLOW);
    print(F_BLUE);
    print(F_MAGENTA);
    print(F_CYAN);
    print(F_WHITE);
    printf("\n");

    print(F_BRIGHT_BLACK);
    print(F_BRIGHT_RED);
    print(F_BRIGHT_GREEN);
    print(F_BRIGHT_YELLOW);
    print(F_BRIGHT_BLUE);
    print(F_BRIGHT_MAGENTA);
    print(F_BRIGHT_CYAN);
    print(F_BRIGHT_WHIT);


    printf("\n");
    return 0;
}
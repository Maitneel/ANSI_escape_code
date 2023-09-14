#include <stdio.h>

#include "ansi_escape_code.h"

#define print(COLOR) printf("%s %16s ", COLOR, #COLOR)

void test_fore_ground(char *arg_option) {
    const char *option = (arg_option == NULL ? B_RESTET : arg_option);

    printf("%s",option);
    print(F_BLACK);
    print(F_RED);
    print(F_GREEN);
    print(F_YELLOW);
    print(F_BLUE);
    print(F_MAGENTA);
    print(F_CYAN);
    print(F_WHITE);
    printf("%s\n", ALL_RESET);

    printf("%s",option);
    print(F_BRIGHT_BLACK);
    print(F_BRIGHT_RED);
    print(F_BRIGHT_GREEN);
    print(F_BRIGHT_YELLOW);
    print(F_BRIGHT_BLUE);
    print(F_BRIGHT_MAGENTA);
    print(F_BRIGHT_CYAN);
    print(F_BRIGHT_WHIT);
    printf("%s\n", ALL_RESET);
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

void test_all_conbination() {
    test_fore_ground(B_BLACK);
    test_fore_ground(B_RED);
    test_fore_ground(B_GREEN);
    test_fore_ground(B_YELLOW);
    test_fore_ground(B_BLUE);
    test_fore_ground(B_MAGENTA);
    test_fore_ground(B_CYAN);
    test_fore_ground(B_WHITE);

    test_fore_ground(B_BRIGHT_BLACK);
    test_fore_ground(B_BRIGHT_RED);
    test_fore_ground(B_BRIGHT_GREEN);
    test_fore_ground(B_BRIGHT_YELLOW);
    test_fore_ground(B_BRIGHT_BLUE);
    test_fore_ground(B_BRIGHT_MAGENTA);
    test_fore_ground(B_BRIGHT_CYAN);
    test_fore_ground(B_BRIGHT_WHIT);

}


void test_graphic_rendition() {
    test_fore_ground(GR_BOLD);
    test_fore_ground(GR_FAINT);
    test_fore_ground(GR_ITALIC);
    test_fore_ground(GR_UNDER_LINE);
    test_fore_ground(GR_BLINK);
    test_fore_ground(GR_RAPID_BLINK);
    test_fore_ground(GR_REVERSE);
    test_fore_ground(GR_CONCEAL);
}
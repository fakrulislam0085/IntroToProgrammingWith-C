// Escape sequences in C
// We use \n to print a new line
// We use \t to print a horizontal tab
// We use \" to print a double quote
// We use \' to print a single quote
// We use \\ to print a backslash
// We use %% to print a percent sign

#include <stdio.h>

int main(void) {
    printf("This is a line with a newline character\n");
    printf("This is a line with a horiozontal tab\tright here.\n");
    printf("This string contains a \"double quote\"\n");
    printf("This string contains a \'single quote\'\n");
    printf("This string contains a \\backslash\\\n");
    printf("This string contains a percent sign %%.\n");

    return 0;
}

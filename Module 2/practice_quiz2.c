#include <stdio.h>
int main()
{
    int x = 0;
    if (x == 1) {   // comparison operator
        if (x >= 0) {
            printf("true ");
        }
        else {
            printf("false");
        }
    }
    else {
        printf("---");
    }

    // return 0; // it is not mandatory to write return 0 in main function
}
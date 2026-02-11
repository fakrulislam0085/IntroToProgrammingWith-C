#include <stdio.h>
int main()
{
    int i = 10;
    //int x = i--;
    //int x = --i;
    //int x = i++;

    int x = ++i;
    printf("x-%d i-%d",x,i);

    return 0;
}

/*
Increment (++) and decrement (--) operators are unary operators used to increase or decrease an integer value by 1.

Pre-increment (++i): Increments the value of i by 1, then returns the incremented value.
    Example:
        int i = 5;
        int x = ++i; // i becomes 6, x is assigned 6

Post-increment (i++): Returns the current value of i, then increments i by 1.
    Example:
        int i = 5;
        int x = i++; // x is assigned 5, then i becomes 6

Pre-decrement (--i): Decreases the value of i by 1, then returns the decremented value.
    Example:
        int i = 5;
        int x = --i; // i becomes 4, x is assigned 4

Post-decrement (i--): Returns the current value of i, then decreases i by 1.
    Example:
        int i = 5;
        int x = i--; // x is assigned 5, then i becomes 4

Use pre-increment/decrement when you need the updated value immediately.
Use post-increment/decrement when you need the original value before the change.
*/
#include <stdio.h>

// Example of how to use a do-while loop:
// 1. Initialize a variable before the loop (here: i = 1).
// 2. In the 'do' block, write the statements you want to repeat.
// 3. After each iteration, update the variable (here: i = i + 1).
// 4. In the 'while(condition);' part, write the condition that will be
//    checked after each iteration. The loop runs at least once, even if
//    the condition is false the first time.

int main()
{
    int i;
    i=1;
    do
    {
        printf("%d\n",i);
        i=i+1;
    }
    while(i<=7);

    return 0;
}



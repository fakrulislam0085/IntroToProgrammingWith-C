#include <stdio.h>
int main()
{
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=5; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}

/*
Nested Loop Explanation:
In programming, a "nested loop" refers to a loop placed inside another loop. 
The inner loop runs completely every time the outer loop executes once.
In this specific code, we have a 'for' loop inside another 'for' loop:

for(int i=1; i<=3; i++)     // Outer loop: runs 3 times (i=1 to i=3)
{
    for(int j=1; j<=5; j++) // Inner loop: runs 5 times for each value of i
   {
        printf("%d ",j);    // Prints the value of j (from 1 to 5) on the same line
   }
    printf("\n");           // After the inner loop finishes, prints a newline
}

This results in three lines of output, where each line displays the numbers 1 to 5 separated by spaces.

Output:
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 

Nested loops are commonly used for working with 2D structures such as matrices or grids, 
or whenever you need to repeat an action a certain number of times within another repeated structure.
*/
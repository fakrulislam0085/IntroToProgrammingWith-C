// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-05/challenges/pattern-2-21-4

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int s = n-1;
    int k =1;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<s; j++)
            {
                printf(" ");
            }
        for(int j=k; j>0; j--)
            {
                printf("%d",j);
            }
        s--;
        k++;
        printf("\n");
    }

    return 0;
}
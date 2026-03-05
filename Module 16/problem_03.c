// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-05/challenges/count-before-one-1

#include <stdio.h>
int count_before_one(int ar[],int n)
{
   int count = 0;
    for(int i=0; i<n; i++)
    {
        
        if(ar[i]==1) break;
        else count++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    int cnt = count_before_one(ar,n);
    printf("%d",cnt);
    return 0;
}
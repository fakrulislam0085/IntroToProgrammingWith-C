// https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-05/challenges/sum-sum-2

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    long long int sump=0, sumn=0;
    for(int i=0; i<n; i++)
    {
        if(ar[i]>0)
        {
            sump=sump+ar[i];
        }
        else
        {
            sumn=sumn+ar[i];
        }
    }
    printf("%lld %lld",sump,sumn);
    
    return 0;
}
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G 

#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int max = INT_MIN, min = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(ar[i]>max)
        {
            max = ar[i];
        }
        if(ar[i]<min)
        {
            min = ar[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}
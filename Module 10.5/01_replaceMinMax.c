// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

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
    int min= INT_MAX, min_idx;
    int max= INT_MIN, max_idx;

    for(int i=0; i<n; i++)
    {
        if(min>ar[i])
        {
            min=ar[i];
            min_idx=i;
        }
        if(max<ar[i])
        {
            max = ar[i];
            max_idx=i;
        }
    }
    int tmp = ar[min_idx];
    ar[min_idx] = ar[max_idx];
    ar[max_idx] = tmp;

    for(int i=0; i<n; i++)
    {
        printf("%d ",ar[i]);
    }
    
    return 0;
}
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int k=1;
    int s=n-1;
    
    for(int i=0; i<2*n; i++)
    {
        for(int j=0; j<s; j++)
        {
            printf(" ");
        }
        for(int j=0; j<k; j++)
        {
            printf("*");
        }
        if(i<n-1)
        {
            s--;
            k=k+2;
        }
        else if(i>=n)
        {
            s++;
            k=k-2;
        }
        printf("\n");
    }

    return 0;
}
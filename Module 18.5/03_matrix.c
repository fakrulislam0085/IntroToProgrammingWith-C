// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    scanf("%d",&r);
    int ar[r][r];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            scanf("%d ",&ar[i][j]);
        }
    }

    int sump = 0;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            if(i != j) continue;
            if(i==j)
            {
                sump = sump + ar[i][j];
            }
        }
        
    }
    
    int sums =0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            if(i+j != r-1) continue;
            if(i+j == r-1)
            {
                sums = sums + ar[i][j];
            }
        }
        
    }
   
   int diff = sums - sump;

   printf("%d",abs(diff));

    return 0;
}
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d",&n,&m);
    int ar[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int x;
    scanf("%d",&x);

    int flag = 1;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(ar[i][j] != x)
            {
                continue;
            }
            if(ar[i][j] == x)
            {
                flag = 0;
            }
        }
    }
    
    if(flag == 0) printf("will not take number\n");
    else printf("will take number\n");
    
    return 0;
}
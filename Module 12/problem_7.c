// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges/tell-me

#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);
        int ar[n];

        for(int i = 0; i < n; i++) 
        {
            scanf("%d", &ar[i]);
        }
        int x;
        scanf("%d", &x);

        int flag=0;   

        for(int i = 0; i < n; i++) 
        {
            if (ar[i] == x)
            {
                flag=1;  
            }   
        }
        if(flag==1) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}
        
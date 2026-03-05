// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

#include <stdio.h>

void even_indice(int ar[], int n, int i)
{
    if(i==n) return;
    even_indice(ar, n, i+1);
    if(i%2 == 0)
    {
        printf("%d",ar[i]);
    } 
    if(i%2 != 0)  
    {
        printf(" ");
    }
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

    even_indice(ar, n, 0);
    return 0;
}
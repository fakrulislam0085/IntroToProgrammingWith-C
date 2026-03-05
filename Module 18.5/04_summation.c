// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L

#include <stdio.h>

long long int sum(int ar[], int n, int i)
{
    if(i==n) return 0;
    long long int result = ar[i] + sum(ar,n,i+1);
    return result;
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

    long long int summm = sum(ar,n,0);

    printf("%lld",summm);
    return 0;
}
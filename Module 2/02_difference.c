// Problem Link (Codeforces): https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D

#include <stdio.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    long long int ans = (a*b)-(c*d);
    printf("Difference = %d",ans);
    
    return 0;
}
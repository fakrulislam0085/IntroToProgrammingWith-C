// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include <stdio.h>
void fun(int n)
{
    if(n==0) return;
    printf("%d",n);
    if(n != 1) printf(" ");
    fun(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A

#include <stdio.h>

int sum(int x, int y)
{
    int result = x+y;
    return result;
}
int main()
{
    int a, b;
    scanf("%d %d",&a, &b);

    int s = sum(a,b);
    printf("%d",s);
    return 0;
}
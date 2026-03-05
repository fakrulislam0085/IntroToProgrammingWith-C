// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include <stdio.h>

void fun(int n, int i)
{
    if(i==n+1) return;
    printf("%d\n",i);
    fun(n, i+1);
}
int main()
{
    int n;
    scanf("%d",&n);

    fun(n,1);
    return 0;
}


//method-2:
// #include <stdio.h>
// void fun(int n)
// {
//     if(n==0) return;
//     fun(n-1);
//     printf("%d\n",n);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     fun(n);
//     return 0;
// }
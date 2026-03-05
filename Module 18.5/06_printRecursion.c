// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

//1st method:

#include <stdio.h>
void fun(int n, int i)
{
    if(i==n+1) return;
    printf("I love Recursion\n");
    fun(n, i+1);
}

int main()
{
    int n;
    scanf("%d",&n);

    fun(n,1);
    return 0;
}


// 2nd method:

// #include <stdio.h>
// void fun(int n)
// {
//     if(n==0) return;
//     printf("I love Recursion\n");
//     //fun(n-1);
//     fun(--n);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     fun(n);
//     return 0;
// }



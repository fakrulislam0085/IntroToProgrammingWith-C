// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

#include <stdio.h>

void prin(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if (i < x)
            printf("%d ", i);
        else
            printf("%d", i);  // no space after last number
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    prin(n);
    return 0;
}




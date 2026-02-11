// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int first_digit = n / 1000; // n is always 4 digits, so dividing by 1000 gives the first digit

    if(first_digit%2==0)
    {
        printf("EVEN");
    }

    else
    {
        printf("ODD");
    }

    return 0;
}  
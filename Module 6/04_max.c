// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a, max=INT_MIN, min=INT_MAX;

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
        if(a<min)
        {
            min=a;
        }
    }
    printf("%d %d\n",min,max);

    return 0;
}

// limits.h header defines constants for integer type limits, e.g. INT_MIN and INT_MAX
// INT_MIN: Minimum value for an int (usually -2147483648 on 32-bit systems)
// INT_MAX: Maximum value for an int (usually 2147483647 on 32-bit systems)
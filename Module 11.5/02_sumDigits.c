// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[11];
    scanf("%s",a);

    for(int i=0; i<strlen(a); i++)
    {
        printf("%c ",a[i]-'48');
    }
    return 0;
}
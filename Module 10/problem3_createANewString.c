// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A

#include <stdio.h>
#include <string.h>
int main()
{
    char S[1001], T[1001];
    gets(S);
    gets(T);

    int lns= strlen(S);
    int lnt= strlen(T);
    
    printf("%d %d\n",lns,lnt);
    printf("%s %s",S,T);

    return 0;
}
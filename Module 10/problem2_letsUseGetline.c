// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B

#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000001];
    // gets(S);
    fgets(S, sizeof(S),stdin);

    for(int i=0; S[i]!='\\'; i++)
    {
        printf("%c",S[i]);
    }
    
    return 0;
}
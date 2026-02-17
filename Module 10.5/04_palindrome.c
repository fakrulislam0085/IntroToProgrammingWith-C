// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include <stdio.h>
#include <string.h>

int main()
{
    char S[1001];
    scanf("%s",&S);
    
    int sz=strlen(S);
    int i=0, j=sz-1;

    for(int i=0; i<strlen(S); i++)
    {
        if(S[i]==S[j]) printf("YES");
        else printf("NO");
        break;
        j--;
    }
    
    return 0;
}
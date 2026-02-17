// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        char S[101];
        scanf("%s",&S);

        int sz= strlen(S);
        
        if(sz<=10) printf("%s\n",S);
        else printf("%c%d%c\n",S[0],sz-2,S[sz-1]); 
    }
    
    return 0;
}
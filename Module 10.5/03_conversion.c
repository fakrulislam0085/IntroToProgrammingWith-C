// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

#include <stdio.h>
#include <string.h>
    
int main()
{
    char S[100001];
    scanf("%s",S);

    int sz= strlen(S);
    for(int i=0; i<sz; i++)
    {
        if(S[i]>='a' && S[i]<='z') 
        {
            printf("%c",S[i]-32);
        }
        if(S[i]>='A' && S[i]<='Z') 
        {
            printf("%c",S[i]+32);
        }
        if(S[i]==',')
        {
            printf("%c",' ');
        }
    }

    return 0;
}
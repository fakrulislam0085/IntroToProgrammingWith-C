// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        char s[60],t[60];
        scanf("%s %s",&s,&t);

        int lens= strlen(s);
        int lent= strlen(t);

        int mx;
        if(lens>=lent) mx = lens;
        else mx =lent;

        for(int i=0; i<mx; i++)
        {
            if(i<lens) printf("%c",s[i]);
            if(i<lent) printf("%c",t[i]);
        }

        printf("\n");
    }
    return 0;
}
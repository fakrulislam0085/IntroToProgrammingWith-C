// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

#include <stdio.h>
#include <string.h>

int main()
{
    char a[11],b[11];
    scanf("%s",a);
    scanf("%s",b);

    int lna= strlen(a);
    int lnb= strlen(b);

    printf("%d %d\n",lna,lnb);
    printf("%s%s\n",a,b);

    int i=0; 
    while(1)
    {
        int tmp=a[0];
        a[0]=b[0];
        b[0]=tmp;
        break;
    }
    printf("%s %s\n",a,b);
    
    return 0;
}
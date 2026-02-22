#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);

    int val = strcmp(a,b);

    if(val<0)
    {
        printf("Lexicographically A is smaller\n");
    }
    else if(val>0)
    {
        printf("Lexicographically B is smaller\n");
    }
    else
    {
        printf("same\n");
    }

    return 0;
}

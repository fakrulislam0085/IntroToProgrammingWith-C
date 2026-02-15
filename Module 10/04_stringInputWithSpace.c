#include <stdio.h>
#include <string.h>

int main()
{
    char a[18];
    //gets(a);

    fgets(a,18,stdin);
    //a[12]='\0';
    printf("%s",a);
    return 0;
}
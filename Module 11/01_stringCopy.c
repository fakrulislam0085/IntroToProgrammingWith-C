#include <stdio.h>
#include <string.h>
int main()
{
// 1st method
    // char a[7]="Apple";
    // char b[7]="Orange";
    // for(int i=0; i<=7; i++)
    // {
    //     a[i]=b[i];
    // }
    // printf("%s",a);



// 2nd method
    // char a[100],b[100];
    // scanf("%s %s",&a,&b);

    // for(int i=0; i<=strlen(b); i++)
    // {
    //     a[i]=b[i];
    // }
    // printf("%s %s",a,b);


// 3rd method
    char a[100],b[100];
    scanf("%s %s",&a,&b);

    strcpy(a,b);
    printf("%s %s",a,b);
    return 0;
}
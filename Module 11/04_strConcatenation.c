#include <stdio.h>
#include <string.h>
int main()
{

// Method 1
    // char a[200], b[100];
    // scanf("%s %s",&a,&b);

    // int k=strlen(a);
    // for(int i=0; i<=strlen(b); i++)
    // {
    //     a[k] = b[i];
    //     k++;
    // }  
    // printf("%s %s",a,b);


// Method 2

    char a[200], b[100];
    scanf("%s %s",&a,&b);

    // strcat() is a built in function in string.h header file which concatenates two strings 
    // and stores the result in the first string. It takes two arguments, the first is the destination string and 
    // the second is the source string. The function appends the source string to the destination string and 
    // adds a null terminator at the end.
    strcat(a,b);    
    printf("%s", a);

    return 0;
}
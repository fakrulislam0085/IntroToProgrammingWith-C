#include <stdio.h>
int main()
{
    char b[6];
    printf("%d\n",sizeof(char));
    
    int length = sizeof(b)/sizeof(char);
    printf("%d\n", length);

    return 0;
}
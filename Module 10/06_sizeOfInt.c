#include <stdio.h>
int main()
{
    int a[5];
   
    printf("%d\n", sizeof(int));
    // printf("%d\n",sizeof(long long int));
    printf("%d\n", sizeof(a));
    
    int n = sizeof(a)/sizeof(int);      // number of elements
    printf("%d", n);

    return 0;
}
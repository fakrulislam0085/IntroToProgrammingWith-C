#include <stdio.h>

int main()
{
    int x=15;
    printf("%p\n",&x);

    int* p = &x;
    printf("%p\n",p);

    //dereference
    printf("%d\n",*p);


    // int x=25;
    // int* p= &x;
    // *p=05;
    // printf("%d",x);

    return 0;
}
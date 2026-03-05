#include <stdio.h>

int main()
{
    int x = 10;
    printf("%d ",x++); //x=10
    printf("%d ",x); //x=11

    printf("%d ",x++); //x=11
    printf("%d \n",++x); //x=(11+1)+1



    printf("%d ",x--); //x=13
    printf("%d ",x); //x=12

    printf("%d ",x--); //x=12
    printf("%d ",--x); //x=(12-1)-1

    return 0;
}
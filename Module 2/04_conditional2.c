// Multiple if-else statement

#include <stdio.h>
int main()
{
    int euro;
    scanf("%d",&euro);

    if (euro >= 200)
    {
        printf("We will go to Paris");
    }
    else if (euro >= 150)
    {
        printf("We will go to Barcelona");
    }
    else if (euro >= 100)
    {
        printf("We will go to Lake Como");
    }
    else
    {
        printf("We will not go to any of the above destinations");
    }
    
    return 0;
}
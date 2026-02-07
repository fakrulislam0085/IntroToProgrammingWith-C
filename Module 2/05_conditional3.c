// Nested if-else statement

#include <stdio.h>
int main()
{
    int euro;
    scanf("%d",&euro);

    if(euro >= 5000)
    {
        printf("I will go to Turkey\n");

        if(euro >= 10000)
        {
            printf("I will go to USA\n");
        }
        else
        {
            printf("I wiil not go to USA\n");
        }  
    }
    else
    {
        printf("Stay at home\n");
    }
    
    return 0;
}

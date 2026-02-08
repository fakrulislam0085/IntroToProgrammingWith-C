#include <stdio.h>

int main()
{
    int p;
    scanf("%d",&p);
    
    if(p == 0)
    {
        printf("Zero");
    }
    else if (p>0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }

    return 0;
}
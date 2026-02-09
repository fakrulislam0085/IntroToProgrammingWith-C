#include <stdio.h>

int main()
{
    int i;
    for(int i=0; i<=10; i+=1)
   {
        // if(i%2 == 1)
        // {
        //    printf("%d\n",i);
        // }
        
        if(i==0)
        {
            printf("%d-Zero\n",i);
        }
        else if(i%2==1)
        {
            printf("%d-Odd\n",i);
        }
        else
        {
            printf("%d-Even\n",i);
        }
   }

    return 0;
}
// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges/count-me-2-2

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100001];
    scanf("%s",a);
    int count = 0;

    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]=='a' || a[i]=='e')
        {
            continue;
        }
        else if(a[i]=='i' || a[i]=='o')
        {
            continue;
        } 
        else if(a[i]=='u')
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}
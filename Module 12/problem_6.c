// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges/count-me-4

#include <stdio.h>
#include <string.h>
int main()
{
    char a[10001];
    scanf("%s",a);
    
    int count[26]={0};

    for(int i=0; i<strlen(a); i++)
    {
        int value= a[i]-97;
        count[value]++;
    }

    for(int i=0; i<26; i++)
    {
        if(count[i]!=0)
        {
            printf("%c - %d\n",i+97,count[i]);
        } 
    }

    return 0;
}
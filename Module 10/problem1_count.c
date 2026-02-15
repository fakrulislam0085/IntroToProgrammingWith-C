// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    scanf("%s",&s);

    int sum=0;
    for(int i=0; i<strlen(s); i++)
    {
        sum= sum+(s[i]-'0');    // we used '0' to convert char to int because in ascii '0' is 48 and '1' is 49 and so on. so if we subtract '0' from any char digit we will get the integer value of that char digit.
    }
    printf("%d",sum);

    return 0;
}
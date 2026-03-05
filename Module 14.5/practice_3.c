#include <stdio.h>
int char_to_ascii(char x)
{
    int val = x;
    return val;
}

int main()
{
    char ch;
    scanf("%c",&ch);

    int value = char_to_ascii(ch);
    printf("%d",value);
    return 0;
}
#include <stdio.h>

char capital_to_small(char P)
{
    char small = P;
    return small;
}

int main()
{
    char ch;
    scanf("%c",&ch);
    
    char sml = capital_to_small(ch);
    printf("%c",sml+32);
    return 0;
}

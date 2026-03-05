#include <stdio.h>
char small_to_capital(char p)
{
    char capital = p;
    return capital;
}
int main()
{
    char ch;
    scanf("%c",&ch);
    
    char cptl = small_to_capital(ch);
    printf("%c",cptl-32);
    return 0;
}

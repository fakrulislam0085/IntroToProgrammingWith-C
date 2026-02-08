#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d",&a,&b);

    int sum = a+b;
    int sub = a-b;
    int mltp = a*b;
    float div = a*1.0/b;    // typecasting to float to get decimal places (implicit typecasting)

    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, mltp);
    printf("%d / %d = %0.2f", a, b, div);
    
    return 0;
}
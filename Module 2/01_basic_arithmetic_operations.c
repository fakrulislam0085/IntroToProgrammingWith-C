/*
 * IMPLICIT TYPECASTING (Type coercion):
 *   - Done automatically by the compiler when converting between compatible types
 *   - No extra syntax needed; the compiler handles it
 *   - Example: When mixing int and float, the int is implicitly promoted to float
 *   - Can lead to data loss in narrowing conversions (e.g., float to int)
 *
 * EXPLICIT TYPECASTING (Type casting):
 *   - Done manually by the programmer using the cast operator (type)expression
 *   - Makes the conversion intent clear in the code
 *   - Example: (double)a/b forces 'a' to be treated as double before division
 *   - Gives more control and clarity; used when you need a specific conversion
 */

#include <stdio.h>

int main()
{
    int a=10, b=4;
    int sum = a+b;
    printf("Sum: %d\n",sum);

    int mns = a-b;
    printf("Difference: %d\n",mns);

    int mlt = a*b;
    printf("Multiplication: %d\n",mlt);

    float dvd = a*1.0/b;    //implicit typecasting
    printf("Division: %f\n",dvd);

    double div = (double)a/b;   //explicit typecasting
    printf("Division: %0.2lf\n",div);

    int mod = a%b;
    printf("Modulus: %d\n", mod);

    return 0;
}
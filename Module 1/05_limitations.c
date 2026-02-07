// Limitations in C
// We use %d to print the value of an integer
// We use %f to print the value of a float
// We use %c to print the value of a character
// We use %lf to print the value of a double
// We use %llf to print the value of a long double
// We use %Lf to print the value of a long float
// We use %LLf to print the value of a long long double
// We use %LLLf to print the value of a long long long double

#include <stdio.h>

int main()
{
    // int a = 1000000000;
    // long long int b = 10000000000;
    // printf("%lld",b);

    float a = 2581.2644642;
    double b = 2581.26298249874592;
    printf("%0.9lf",b);

    return 0;
}
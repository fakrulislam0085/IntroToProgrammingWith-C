// Variables in C

// We use %d to print the value of an integer
// We use %f to print the value of a float
// We use %c to print the value of a character

#include <stdio.h>

int main()
{
    int ageRahim = 53, ageKarim = 60;
    printf("%d %d\n", ageRahim, ageKarim);  // '\n' is used to print a new line
    
    float x = 10.5, y = 5.30;
    printf("x: %f \ny: %f\n", x, y); // '\' is used to print a new line

    float value = 3.453;
    printf("Value: %0.6f", value);

    char Fariha = 'A';
    printf("%c", Fariha);
    return 0;
}




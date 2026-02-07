/*
 * How to compile, run and give input in terminal:
 * 1. Compile: gcc 03_input_output.c -o 03_input_output.exe
 * 2. Run: ./03_input_output.exe  (or 03_input_output.exe on Windows CMD)
 * 3. When the program is running, type your input and press Enter (e.g. 23 3.23 a then 50% 60%)
 */

#include <stdio.h>

int main()
{
    int age;
    float pi;
    char initial;

    scanf("%d %f %c", &age, &pi, &initial);
    printf("Age: %d\n", age);
    printf("Pi: %f\n", pi);
    printf("initial: %c\n", initial);


    int a,b;
    char p;
    scanf("%d%c %d%c",&a,&p,&b,&p);
    printf("%d%% %d%%",a,b);

    return 0;
}

    
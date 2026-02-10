// https://www.hackerrank.com/contests/module-3-5-practice-a-introduction-to-c-programming-a/challenges/variables-6-4

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a; scanf("%d", &a); 
    long long int b; scanf("%lld", &b); 
    float c; scanf("%f", &c); 
    char d; scanf(" %c", &d); // The space before %c is important to skip the newline character left by the previous input

    printf("\n"); 
    
    printf("%d\n", a); 
    printf("%lld\n", b); 
    printf("%.2f\n", c);        // 2 decimal places 
    printf("%c\n", d); 
    
    return 0;
}
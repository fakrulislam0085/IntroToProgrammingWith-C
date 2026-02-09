#include <stdio.h>

int main() {
    int N = 1;

    while (1) {
        if (N % 5 == 0) {
            printf("%d Yes\n", N);
        } else {
            printf("%d No\n", N);
        }
        
        if (N == 10) {
            break; // Stop the loop when N equals its current value
        }
        
        N = N + 1;
    }
    return 0;
}

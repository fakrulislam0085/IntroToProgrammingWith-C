// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include <stdio.h>
int main() {
    int n, m; 
    scanf("%d %d", &n, &m); 
    
    int freqArr[m];
    for (int i = 0; i < m; ++i) freqArr[i] = 0;

    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        if (x >= 1 && x <= m) freqArr[x - 1]++;
    }

    for (int i = 0; i < m; ++i) {
        printf("%d\n", freqArr[i]);
    }

    return 0;
}
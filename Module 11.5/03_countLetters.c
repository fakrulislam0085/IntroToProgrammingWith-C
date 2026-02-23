// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

#include <stdio.h>

int main() {
    int freq[26] = {0};
    int c;

    while ((c = getchar()) != EOF && c != '\n' && c != '\r') {
        if (c >= 'a' && c <= 'z') freq[c - 'a']++;
    }

    for (int i = 0; i < 26; ++i) {
        if (freq[i] > 0) printf("%c : %d\n", 'a' + i, freq[i]);
    }

    return 0;
}
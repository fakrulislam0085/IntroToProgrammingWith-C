// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int ftdgt = n/10;
    int sndgt = n%10;

    if(sndgt % ftdgt==0)
    {
        printf("YES");
    }
    else if(ftdgt % sndgt==0)
    {
        printf("YES");
    }           
    else
    {
        printf("NO");
    }
    
    return 0;
}
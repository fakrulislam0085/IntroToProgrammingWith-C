// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges/count-me-3

#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        char S[10001];
        scanf("%s",S);
        int sz = strlen(S);

        int countC=0, countS=0, countD=0;
        
        for(int i=0; i<sz; i++)
            {
                if(S[i]>='A' && S[i]<='Z') countC++;
                if(S[i]>='a' && S[i]<='z') countS++;
                if(S[i]>='0' && S[i]<='9') countD++;
            }
        printf("%d %d %d",countC,countS,countD);
        printf("\n");
    }
    
    return 0;
}
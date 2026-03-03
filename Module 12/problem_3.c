// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-5/challenges/farmers-1

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    
    for(int i=0; i<t; i++)
    {
        int M1,M2,D;
        scanf("%d %d %d\n",&M1,&M2,&D);

        int a = M1+M2;
        int b= M1*D;
        int c= b/a;
        int FD= D-c;
    
        printf("%d\n",FD);
    }

    return 0;
}
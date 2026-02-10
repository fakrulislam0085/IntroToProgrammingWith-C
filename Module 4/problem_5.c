// https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-05/challenges/shopping-13

#include <stdio.h>
int main()
{
    long long int N;
    scanf("%lld",&N);

    if(N>1000)
    {
        printf("I will buy Punjabi\n");
        if(N-1000>=500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!\n");
    }

    return 0;
}


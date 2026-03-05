// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-05/challenges/even-and-odd-8-2

#include <stdio.h>

void odd_even(void)
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    int cnt_even =0;
    int cnt_odd =0;

    for(int i=0; i<n; i++)
    {
        if(ar[i]%2==0) cnt_even++;
        else cnt_odd++;
    }
    printf("%d %d",cnt_even,cnt_odd);
}

int main()
{
    odd_even();
    
    return 0;
}
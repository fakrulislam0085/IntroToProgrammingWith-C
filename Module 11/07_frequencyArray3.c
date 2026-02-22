#include <stdio.h>
#include <limits.h>
/* 
 * Program: Find the Largest Distinct Element in position pos in an array
 * 
 * Algorithm:
 * 1. Read n integers into an array
 * 2. Find the maximum value in the array
 * 3. Create a frequency array to mark which values are present
 * 4. Count distinct values from largest to smallest
 * 5. Return the pos-th largest distinct value
 * 
 * Constraints: All values must be non-negative integers
 */
int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    int pos;
    scanf("%d",&pos);

    int max= INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(ar[i]>max) max = ar[i];
    }
    // printf("%d",max);

    int fq[max+1];
    for(int i=0; i<=max; i++)
    {
        fq[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        fq[ar[i]]=1;
    }

    int count=0;
    for(int i=max; i>=0; i--)
    {
        if(fq[i]==1) count++;
        if(count==pos) {
            printf("%d",i);
            break;
        }
    }
    
    return 0;
}
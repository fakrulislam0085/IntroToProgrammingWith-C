/*
 * Program: Selection Sort
 * Description: This program implements the selection sort algorithm to sort an array of integers.
 * It takes n elements as input and sorts them in ascending order by repeatedly finding the minimum
 * element and swapping it with the current position.
 */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
           //descending: if(ar[i]<ar[j])
            ascending: if(ar[i]>ar[j])
            {
                int tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",ar[i]);
    }
    
    return 0;
}
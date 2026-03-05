
#include <stdio.h>
int main()
{
    // Read the number of array elements
    int n;
    scanf("%d",&n);
    // Create an array of size n
    int ar[n];

    // Input all array elements from the user
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    // Read the target sum value
    int x;
    scanf("%d",&x);
    // Initialize flag to track if pair is found
    int flag=0;

    // Nested loop to check all possible pairs (i, j) where i < j
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
           // If sum of two elements equals the target, set flag and break
           if(ar[i] + ar[j] == x)
            {
                flag=1;
                break;
            }
        }
    }

    // Output result: Print "NO" if no pair found, "YES" if pair exists
    if(flag==0)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
#include <stdio.h>
int main()
{

// Method-1

    // int n;
    // scanf("%d",&n);

    // int a[n];
    
    // for(int i=0; i<n; i++)
    // {
    //     scanf("%d",&a[i]);
    // }

    // int zero= 0, one =0;

    // for(int i=0; i<n; i++)
    // {
    //     if(a[i]==0) zero++;
    //     if(a[i]==1) one++;
    // }
    
    // printf("Zero-%d\n",zero);
    // printf("One-%d",zero);


// Method -2

    // int n;
    // scanf("%d",&n);

    // int a[n];

    // for(int i=0; i<n; i++)
    // {
    //     scanf("%d",&a[i]);
    // }

    // int cnt[7]={0};

    // for(int i=0; i<n; i++)
    // {
    //     if(a[i]==0) cnt[0]++;
    //     if(a[i]==1) cnt[1]++;
    //     if(a[i]==2) cnt[2]++;
    // }
    
    // printf("Zero-%d\n",cnt[0]);
    // printf("One-%d\n",cnt[1]);
    // printf("Two-%d\n",cnt[2]);


// Method -3

    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int cnt[7]={0};

    for(int i=0; i<n; i++)
    {
        int val=a[i];
        cnt[val]++;
    }
    
    for(int i=0; i<=6; i++)
    {
        printf("%d- %d\n",i,cnt[i]);
    }

    return 0;
}
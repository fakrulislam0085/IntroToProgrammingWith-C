// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n) !=EOF)
    {
        if(n==1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    // The loop uses 'scanf' and checks for 'EOF' (End Of File), 
    // - which allows the program to stop reading input when there is no more data provided 
    // - (e.g., if input is redirected from a file or ends).
    
    return 0;
}
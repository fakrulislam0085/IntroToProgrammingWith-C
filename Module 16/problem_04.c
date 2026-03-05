// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-05/challenges/is-palindrome-15

#include <stdio.h>
#include <string.h>
int is_palindrome(char txt[])
{
    int len = strlen(txt);
    int isPalindrome = 1; 

    for (int i = 0; i < len / 2; i++) {
        if (txt[i] != txt[len - 1 - i]) {
            isPalindrome = 0; 
            break;
        }
    }
    if(isPalindrome==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char S[1001];
    scanf("%s",S);

    int result = is_palindrome(S);
    if(result==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
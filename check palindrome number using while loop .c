#include<stdio.h>

int main ()
{
    int n,reverse=0,rem,original;
    printf("enter a numeber");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    printf("reverse of number is %d", reverse);
        if (original==reverse)
        {
            printf("\n number is palindrome");
        }
        else
        {
            printf("\n number is not palindrome");
        }
        return 0;
}
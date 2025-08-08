#include <stdio.h>

void main()
{
    int n , copy,rev=0;

    printf("Enter n: ");
    scanf("%d",&n);

    copy=n;

    while(copy>0)
    {
        rev = rev*10;

        rev = rev+(copy%10);
        copy/=10;
    }

    if(n==rev)
    {
        printf("Palindrome");

    }
    else
    {
        printf("Not a Palindrome");
    }
}

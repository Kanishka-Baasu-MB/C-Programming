#include <stdio.h>

void main()
{
int i,n,sum=0;

printf("Enter the value of n :");
scanf("%d",&n);

while (i<=n)
{
sum= sum+i;
i++;
}

printf("Sum=%d",sum);
}

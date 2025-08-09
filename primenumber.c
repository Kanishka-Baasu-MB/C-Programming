#include <stdio.h>

void main ()
{
int n,i;

printf("Enter n:");
scanf("%d",&n);

for(i=2;i<n;i++)
{
    if (n%i != 0)
        continue;
        else
        {
        printf("Not a Prime");
        break;
        }
}
}

#include <stdio.h>

void main()
{
    int n;
    char str[50];

    printf("Enter n:");
    scanf("%d", &n);

    printf("Enter String :");
    scanf("%s",str);

    for( int i=0;i<n;i++)
    {
    printf("%c",str[i]);
    }
}

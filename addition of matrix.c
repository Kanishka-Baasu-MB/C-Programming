#include <stdio.h>

void main()
{
    int arr1[2][2],arr2[2][2],i, j;

    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter Element:");
            scanf("%d",arr1[i][j]);
        }
    }
    printf("Next Array\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter Element:");
            scanf("%d",arr2[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",arr1[i][j]+ arr2[i][j]);
        }
        printf("\n");
    }
}

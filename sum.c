#include <stdio.h>

void main()
{
int heights[50],n,i,sum=0;
float avg;

printf("Enter the number of elements:");
scanf("%d",&n);

for(i=0;i<n;i++)
{


    printf("Element %d:" , i);
    scanf("%d", &heights[i]);
    sum = sum+heights[i];
}

printf("Sum:%d",sum);

avg=(float)sum/n;

printf("Avg: %f",avg);

}

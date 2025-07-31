#include <stdio.h>

void main()
{
int num1,num2;
char op;

printf("Enter num1:");
scanf("%d",&num1);

printf("Enter num2:");
scanf("%d",&num2);

printf("Enter operator:");
scanf("\n %c",&op);

switch(op)
{
    case '+':
        printf("Sum:",num1+num2);
        break;
    case'-':
        printf("Diff:",num1+num2);
        break;
    case'*':
        printf("Product:",num1+num2);
        break;
    default:
        printf("Invalid operator");

}
}

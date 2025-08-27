#include <stdio.h>

int add()
{
    int a = 5;
    int b = 7;
    int c = a+b;

    return c;
}
void main()
{
     int ans = add();
     printf("%d",ans);
}

#include <stdio.h>

int add ( int x, int y)
{
    int c = x+y;
    int d = x-y;
    printf (" Diff : %d\n",d);
    return c;
}
void main()
{
    int a = 7;
    int b = 9;

    printf("%d",add(a,b));
}

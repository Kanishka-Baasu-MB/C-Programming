#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *name;

    name=calloc(100,1);

    strcpy (name,"Hello World!");

    printf("%s",name);


}

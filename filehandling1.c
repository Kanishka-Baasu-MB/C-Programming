#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("test.txt","r");

   fgets("c",5,fp);
   printf("%s","c");

}

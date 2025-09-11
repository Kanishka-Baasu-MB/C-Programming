#include <stdio.h>

struct Book{
     int No;
     char Author[50];
     float price;
};
int main()
{
  int a;
  a = 5;

  struct Book HP;
  HP.No = 9;
  HP.price-590.75;


  printf("%d\n",HP.No);
  printf("%f\n",HP.price);
  printf ("%s\n",HP.Author);


}

# include <stdio.h>

int main ()
{
    int mark ;
   // printf("Enter mark:");
   // scanf("%d",&mark);

    if(mark <=100 && mark >=0){
        if(mark>=90 && mark<=100){
            printf("Grade A");
        }
        else if(mark>=80)
        {
            printf("Grade B");
        }
        else if (mark>=70)
        {
            printf("Grade C");
        }
        else if( mark>=60)
        {
            printf("Grade D");
        }
        else if (mark>=50)
        {
            printf("Grade E");
        }
        else{
            printf("Fail");
        }
    }
    else{
        printf("Invalid mark");
    }
}

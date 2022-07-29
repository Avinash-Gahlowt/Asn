#include<stdio.h>
int main()
{
   float a;
   printf("Enter any number to check whether it is positive or not");
   scanf("%f",&a);
 
   if(a>0)
   { 
    printf("Positive Number");
   }
   if(a<=0)
   {
    printf("Non-Positive");
    }
 return 0;

}

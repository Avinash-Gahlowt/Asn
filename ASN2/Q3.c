#include<stdio.h>
int main()
{
   int num;
    printf("Please enter number to Check Even or odd\t");
   scanf("%d",&num);
   if(num%2==0)
        printf("The number is even");
    else
        printf("The number is odd");
    return 0;
}
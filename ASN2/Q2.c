#include<stdio.h>
int main()
{
    int num;
    printf("Enter any Number to check divisibility by 5");
    scanf("%d",&num);
    if(num%5==0)
         printf("Number is divisible by 5");
    else
        printf("The given number is not divisible by 5");
    return 0;
}
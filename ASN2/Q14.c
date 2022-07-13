#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number");
    scanf("%d",&num);
    if(num%7==0||num%3==0)
        printf("The given number is divisible by 7 or divisible by 3.");
    else
        printf("The number is not divisible by both numbers together but may be divisible by any one numbers");
    return 0;
}
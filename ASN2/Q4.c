#include<stdio.h>
int main()
{
    int num;
    printf("Please enter number to Check Even or odd without modulo");
    scanf("%d",&num);
    if((num/2)*2==num)
        printf("The number is even");
    else
        printf("The number is odd");
    return 0;
}
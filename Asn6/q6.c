#include<stdio.h>
int main()
{
    int sum=1,n;
    printf("Enter the number to get factorial of  that number: ");
    scanf("%d",&n);
    for (int i = n; i >= 1; i--)
    {
        sum=sum*i;
    }
        printf("The Factorial of %d is:%d ",n,sum);
    return 0; 
}
#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter the number to get sum upto that number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum=sum+(2*i-1);
    }
        printf("The Sum of first %d odd Natural Numbers are:%d ",n,sum);
    return 0; 
}
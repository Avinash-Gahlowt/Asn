#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter the number to get sum upto that number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum=sum+i*i;
    }
        printf("The Sum of first %d Square Natural Numbers are:%d ",n,sum);
    return 0; 
}
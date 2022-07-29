#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the number to count the digits in it: ");
    scanf("%d",&n);
    while (n)
    {
        n=n/10;
        count++;
    }
    printf("The number of digits  is: %d ",count);
    return 0;
}
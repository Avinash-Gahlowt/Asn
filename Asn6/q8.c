#include<stdio.h>
int main()
{
    int flag=0,n;
    printf("Enter the number to check its a prime or not: ");
    scanf("%d",&n);
    for (int i = 2; i< n/2; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Not Prime");
    else
        printf("Prime");
return 0; 
}
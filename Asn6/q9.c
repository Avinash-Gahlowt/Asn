#include<stdio.h>
int main()
{
    int n1,n;
    printf("Enter two numbers to calculate LCM : ");
    scanf("%d%d",&n,&n1);
    for (int i = 1; i< n*n1; i++)
    {
        if(i%n==0&&i%n1==0)
        {
            printf("LCM of %d and %d is: %d ",n,n1,i);
            break;
        }
    }
return 0; 
}
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check the next prime number: ");
    scanf("%d",&n);
for (  n ; 1 ; n++)
{
    int check=0;
    for ( int i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            check=1;
        }    
    }
    if(check==0)
        {
        printf("%d ",n);
        break;
        }
}
return 0;
}

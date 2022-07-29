#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers to check the prime number between them: ");
    scanf("%d%d",&a,&b);

for (int  n = a ;n<= b ; n++)
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
        }
}
return 0;
}
#include<stdio.h>
int main()
{
for ( int n = 2; n <=100; n++)
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
        printf("%d ",n);
}
return 0;
}

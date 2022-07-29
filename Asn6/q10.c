#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    printf("Enter the number to reverse its digit: ");
    scanf("%d",&n);
    while (n)
    {
            rem = n%10;
            n=n/10;
            rev=rev*10+rem;
    }
    printf("Reverse is %d: ",rev);
return 0;
}

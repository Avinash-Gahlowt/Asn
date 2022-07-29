#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to convert into negative/positive: ");
    scanf("%d",&n);
    switch (n<0)
    {
    case 1:
        printf("%d",-n); 
        break;
    case 0:
        printf("%d",-n);
        break;
    default:
        printf("You Entered 0 ");
        break;
    }
    return 0;
} 
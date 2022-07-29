#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year to check its leap or not: ");
    scanf("%d",&year);
    switch (year%400==0)
    {
    case 1:
        printf("it is an leap year");
        break;
    case 0:
        switch (year%4==0&&year%100!=0)
        {
        case 1:
            printf("it is a leap year");
            break;
        case 0:
            printf("Hence Not a leap year");
            break;
        }
    break;
    default:
        break;
    }
    return 0;
}
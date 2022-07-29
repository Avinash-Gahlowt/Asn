#include<stdio.h>
int main()
{
    int day;
    printf("Enter the number of day in week: ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("Happy Monday");
        break;
    case  2:
        printf("Turning Tuesday");
        break;
    case  3:
        printf("Great Wednesday");
        break;
    case  4:
        printf("Throwback Thrusday");
        break;
    case  5:
       printf("Flashback Friday");
        break;
    case  6:
        printf("Weekend Saturday");
        break;
    case  7:
        printf("Finaly Sunday ");
        break;
    default:
    printf("Ooops You enterd wrong day");
    break;
    } 
     
    return 0;
}
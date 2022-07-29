#include<stdio.h>
int main(){
        char choice;
        int num1,num2,num3;
    while (1)
    {
        printf("\nEnter the option to perform operation:\na. Check Isoceles triangle\nb. Right ANgle \nc. Equilateral\nd. Exit.\n ");
        fflush(stdin);
        scanf("%c",&choice);
        printf("Enter three numbers : ");
        scanf("%d%d%d",&num1,&num2,&num3);
        switch (choice)
        {
        case 'a':
            if((num1==num2)||(num2==num3)||(num3==num1))
                printf("Isoceles triangle");
            else
                printf("Not an Isoceles Triangle");
            break;
        case 'b':
            if((num1*num1==num2*num2+num3*num3||num2*num2==num3*num3+num1*num1||num3*num3==num2*num2+num1*num1))
                printf("Right triangle");
            else
                printf("Not an Right angle Triangle");           
            break;
        case 'c':
            if((num1==num2)&&(num2==num3))
                printf(" Equilateral triangle");
            else
                printf("Not an Equilateral Triangle");            
            break;
        case 'd':
            return 0;           
        default:
            printf("invalid option");            
            break;
        }
    }
   return 0;
}
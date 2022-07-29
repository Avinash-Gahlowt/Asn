#include<stdio.h>
int main(){
        char choice;
        float num1,num2;
    while (1)
    {
        printf("\nEnter the option to perform operation:\na. Addition\nb. Substraction\nc. Multiplication\nd. Division\ne. Exit.\n ");
        fflush(stdin);
        scanf("%c",&choice);
        switch (choice)
        {
        case 'a':
            printf("Enter two numbers : ");
            scanf("%f%f",&num1,&num2);
            printf("Sum of %f and %f is: %f ",num1,num2,num1+num2);
            break;
        case 'b':
            printf("Enter two numbers : ");
            scanf("%f%f",&num1,&num2);
            printf("Substraction of %f and %f is %f: ",num1,num2,num1-num2);
            break;
        case 'c':
            printf("Enter two numbers : ");
            scanf("%f%f",&num1,&num2);
            printf("Multiplication of %f and %f is %f: ",num1,num2,num1*num2);
            break;
        case 'd':
            printf("Enter two numbers : ");
            scanf("%f%f",&num1,&num2);
            printf("division of %f and %f is %f: ",num1,num2,num1/num2);
            break;
        case 'e':
            return 0;
        default:
        break;
        }
    }
   return 0;
}
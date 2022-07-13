#include<stdio.h>
int main(){
   int number1,number2;
   printf("Enter two numbers");
   scanf("%d%d",&number1,&number2);
    if(number1>number2||number1==number2)
        printf("The greater number is %d",number1);
    else
        printf("The greater number is %d",number2);
    return 0;
}
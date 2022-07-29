#include<stdio.h>
int main(){
    int num;
    printf("Enter the number to convert into its nearest odd number: ");
    scanf("%d",&num);
    switch (num%2==0)
    {
    case 1:
        printf("%d",num+1);
        break;
    default :
        printf("You Entered a odd number");
        break;
    }
}
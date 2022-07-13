#include<stdio.h>
int main(){
    int x,num;
    printf("Enter any number to replace its last digit");
    scanf("%d",&num);
    x=num%10;
    printf("New Number is %d",num-x);
    return 0;
}
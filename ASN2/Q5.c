#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num/100>=1&&num/100<=9)
        printf("The number is three digit number");
    else
        printf("The number is not three digit number");
    return 0;
}
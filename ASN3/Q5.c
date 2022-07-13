#include<stdio.h>
int main(){
    int num;
    int first,Temp1,last,middle;
    scanf("%d",&num);
    first=num/100;
    Temp1=num%100;
    last=Temp1%10;
    middle=Temp1/10;
    printf("The sum of all digits are %d",first+last+middle);
    return 0;
}
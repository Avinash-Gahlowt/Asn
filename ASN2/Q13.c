#include<stdio.h>
int main(){
    int num;
    printf("Enter three digit number");
    scanf("%d",&num);
    printf("After rotation one digit towards right %d%d",num%10,num/10);
    return 0;
}

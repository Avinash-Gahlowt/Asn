#include<stdio.h>
int main(){
    int num;
    printf("Enter any number to check even or odd");
    scanf("%d",&num);
    if(!(num&1))
        printf("The number is even");
    else
        printf("The given numewr is odd");
    return 0;
}
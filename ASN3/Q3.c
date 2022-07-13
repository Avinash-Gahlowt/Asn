#include<stdio.h>
int main(){
int a,b,temp;
printf("Please Enter two numbers to swap");
scanf("%d%d",&a,&b);      
printf("Before swaping a=%d b=%d",a,b);   
temp=a;
a=b;
b=temp;
printf("After Swapping %d and %d",a,b);
return 0; 
}
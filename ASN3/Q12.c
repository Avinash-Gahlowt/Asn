#include<stdio.h>
int main(){
    float amt;
    printf("Please Enter amount in INR");
    scanf("%f",&amt);
    printf("The amount in USD of %.2f INR is %.2f",amt,amt/76.23);
    return 0;
}
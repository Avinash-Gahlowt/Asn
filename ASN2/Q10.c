#include<stdio.h>
int main(){
    float cp,sp,A;
    printf("Please enter Cost price and Sell price respectively");
    scanf("%f%f",&cp,&sp);
    A=sp-cp;
    if(A<0)
        printf("Loss percentage is %f",((-A)*100)/cp);
    else if (A==0)
        printf("There is no loss and No profit");
    else
        printf("The profit percentage is %f",(A*100)/cp);
  
    return 0;
}
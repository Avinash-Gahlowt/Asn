#include<stdio.h>
int main(){
int a,b,i,hcf=1;
printf("Enter two numbers to check HCF: ");
scanf("%d%d",&a,&b);
int min=a<b?a:b;
    for ( i = 1;    i <= min; i++)
    {
        if((a%i==0) && (b%i==0))
            hcf=i;
    }
    if (hcf==1)
        printf("The given numbers are co-prime");
    else
        printf("The given numbers are not co-prime");
    return 0;
}

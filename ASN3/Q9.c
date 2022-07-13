#include<stdio.h>
int main(){

    int a=sizeof(a);
    char b;
    double c;
    float d;
    int x= sizeof(b);
    int y= sizeof(c);
    int z= sizeof(d);
    printf("The size of int variable is %d\n",a);
    printf("The size of int variable is %d\n",x);
    printf("The size of int variable is %d\n",y);
    printf("The size of int variable is %d\n",z);
    return 0;
    
}
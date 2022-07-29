#include<stdio.h>
int main(){
    int i,n;
    printf("Enter number upto which you want to print the natural numbers ");
    scanf("%d",&n);
    i=n;
    printf("The first %d Natural Numbers in reverse order are:",n);
    while(i>=1)
    {
        printf(" %d ",i);
        i--;
    }
    return 0;
}
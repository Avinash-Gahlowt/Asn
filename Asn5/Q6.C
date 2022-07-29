#include<stdio.h>
int main(){
    int i = 1,n;
    printf("Enter the number that you want to print the odd number ");
    scanf("%d",&n);
    printf("The first %d Odd Natural Numbers are:",n);
    while(i<=n)
    {
        printf(" %d ",2*i);
        i++;
    }
    return 0;
}
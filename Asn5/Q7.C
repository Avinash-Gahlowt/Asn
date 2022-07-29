#include<stdio.h>
int main(){
    int i,n ;
    printf("Enter the number that you want to print the odd number in reverse order ");
    scanf("%d",&n);
    i=n;
    printf("The first %d Odd Natural Numbers are:",n);
    while(i>=1)
    {
        printf(" %d ",2*i);
        i--;
    }
    return 0;
}

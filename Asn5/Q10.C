#include<stdio.h>
int main(){
    int i = 1,n;
    printf("Enter the number of which you want to print table ");
    scanf("%d",&n);
    printf("The table of %d is:\n",n);
    while(i<=10)
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
    return 0;
}
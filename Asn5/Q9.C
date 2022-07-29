#include<stdio.h>
int main(){
    int i = 1,n;
    printf("Enter the number that much you want to print cubes ");
    scanf("%d",&n);
    printf("The cubes of first %d Natural Numbers are:",n);
    while(i<=n)
    {
        printf(" %d ",i*i*i);
        i++;
    }
    return 0;
}
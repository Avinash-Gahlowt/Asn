#include<stdio.h>
int main(){
    int i = 1;
    printf("The first 10 even natural numbers are:");
    while(i<=10)
    {
        printf(" %d ",2*i);
        i++;
    }
    return 0;
}
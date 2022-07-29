#include<stdio.h>
int main(){
    int i = 10;
    printf("The first 10 even natural numbers in reverse order are:");
    while(i>=1)
    {
        printf(" %d ",2*i);
        i--;
    }
    return 0;
}

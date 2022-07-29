#include<stdio.h>
int main(){
    int i = 10;
    printf("The first 10 Odd Natural Numbers in reverse order are:");
    while(i>=1)
    {
        printf(" %d ",2*i-1);
        i--;
    }
    return 0;
}

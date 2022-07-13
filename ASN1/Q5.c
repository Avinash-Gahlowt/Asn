#include<stdio.h>
int main(){
    char str[100];
    int len = 0;
    scanf("%s %n",str,&len);
    printf(" = %d", len);
    return 0;
}
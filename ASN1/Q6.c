#include<stdio.h>
int main(){
    char stri[20];
    printf("Enter your name");
    scanf("%[^\n]s",&stri);
    printf(" \"Hello, %s\"",stri);
}
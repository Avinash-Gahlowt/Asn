#include<stdio.h>
int main(){
    int Date,Month,Year;
    printf("Enter in the form of DD/MM/YYYY");        
    scanf("%d/%d/%d",&Date,&Month,&Year);
    printf("Day-%d,Month-%d,Year-%d",Date,Month,Year);      
    return 0; 
}
#include<stdio.h>
 int main()
 {
    for ( int i = 0; i < 3; i++)
    {                   
        for (int j = 0; j < 19; j++)
        {
            if(((j>=2-i)&&(j<=6+i)||(j>=12-i)&&(j<=16+i)))
            printf("*");
            else    
                printf(" ");           
        }
        printf("\n");
    }
        for ( int i = 1; i <= 10; i++)
    {                   
        for (int j = 1; j <= 19; j++)
        {   if((i==1)&&(j==6))
                printf("MySirG");
            if((i==1)&&(j>=6)&&(j<=11))
                continue;
            if((i<=j)&&(j<=18-i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
 } 
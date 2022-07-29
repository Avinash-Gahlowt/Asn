#include<stdio.h>
int main()
{
    int pre=0,curr=1,next=0,n;
    printf("Enter a nunmber to print  Nth term of fibonacci series: ");
    scanf("%d",&n);
    for (int i = 0; i < n-1; i++)
    {
        next=pre+curr;
        pre=curr;
        curr=next;
    }
    printf("%d",next);
    return 0;
}



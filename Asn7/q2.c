#include<stdio.h>
int main()
{
    int pre=0,curr=1,next=0,n;
    printf("Enter a nunmber to print first Nth term of fibonacci series:  ");
    scanf("%d",&n);
    printf("1 ");
    for (int i = 0; i < n-1; i++)
    {
        next=pre+curr;
        printf("%d ",next);
        pre=curr;
        curr=next;
    }
    return 0;
}

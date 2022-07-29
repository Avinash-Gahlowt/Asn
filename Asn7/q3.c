#include<stdio.h>
int main()
{
    int pre=0,curr=1,next=0,n;
    printf("Enter a nunmber to check it is in fibonacci seriesor not : ");
    scanf("%d",&n);

    for (int i = 0; i < n-1; i++)
    {
        next=pre+curr;
        pre=curr;
        curr=next;
        if(next==n)
            {
                printf("Number Found");
                break;
            }
        if(next>n)
            {
                printf(" Number Not found");
                break;
            }
    }
    return 0;
}

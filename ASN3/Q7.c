#include<stdio.h>
int main()
{
    float discr,a,b,c;
    printf("Enter the coefficient of equation");
    scanf("%f%f%f",&a,&b,&c);
    discr=b*b-4*a*c;
    if(discr<0)
        printf("Roots are distinc and complex roots");
    else if (discr=0)
        printf("Roots are Real and Equal");
    else
        printf("Roots are Real and Distinct");
    return 0;
}



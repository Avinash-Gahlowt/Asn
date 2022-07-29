#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter any Alphabet\t");
    scanf("%c",&alpha);
    if (alpha>=65&&alpha<=90)
        printf("the given character is in Alphabet(Uppercase)");
    else if (alpha>=97&&alpha<=122)
        printf("The given character is in Alphabet(Lowecase)");
    else if(alpha>=48&&alpha<=57)
        printf("The given character is digit");
    else
        printf("The given character is special character");
    
    return 0;
}
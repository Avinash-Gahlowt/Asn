#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter any Alphabet\t");
    scanf("%c",&alpha);
    if (alpha>=65&&alpha<=90)
        printf("the given alphabet is in Uppercase");
    else if (alpha>=97&&alpha<=122)
        printf("The given alphabet is in Lowecase");
    else
        printf("The given character is not an alphabet");
    
    return 0;
}
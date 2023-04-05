#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    printf("Enter a Alphabet:");
    scanf("%c",&n);
    if((n>='a' && n<='z')||(n>='A' && n<='Z'))
    {
        printf("The given character is an Alphabet.");
    }
    else
    {
        printf("The given character is not an Alphabet.");
    }
    return 0;
}

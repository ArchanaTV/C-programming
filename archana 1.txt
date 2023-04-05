#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    printf("Enter an Alphabet:");
    scanf("%c",&n);
    if(n>='A'&& n<='Z')
    {
        printf("'%c'The given character is in Uppercase",n);
    }
    else if(n>='a' && n<='z')
    {
        printf("'%c'The given character is in Lowercase",n);
    }
    else
    {
        printf("'%c'The character is not an alphabet",n);
    }
    return 0;
}

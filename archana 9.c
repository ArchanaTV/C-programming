#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    printf("Enter a Alphabet:");
    scanf("%c",&n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    {
        printf("%c is a vowel",n);
    }
    else
    {
        printf("%c is not a vowel",n);
    }
    return 0;
}

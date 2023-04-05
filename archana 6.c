#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n;
    printf("Enter your Number:");
    scanf("%d",&n);
    do
    {
        a=n%10;
        b=n%10;
        printf("%d",a);
        n=b;
    }
    while(n>1);
    return 0;
}

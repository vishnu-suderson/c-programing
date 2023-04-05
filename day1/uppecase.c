#include <ctype.h>
#include <stdio.h>
int main()
{
    int a;
    printf("enter the some thing to check is aplhabet\n");
    scanf("%d", &a);
    if (isupper(a))
    {
        printf(" it is uppercase:%d", a);
    }
    else
    {
        printf("it is lowercase:%d", a);
    }
    return 0;
}
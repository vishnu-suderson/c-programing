#include <ctype.h>
#include <stdio.h>
int main()
{
    int a;
    printf("enter the some thing to check is aplhabet\n");
    scanf("%d", &a);
    if (isalpha(a))
    {
        printf(" it is alphabet");
    }
    else
    {
        printf("it is not alpha");
    }
    return 0;
}
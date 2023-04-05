#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("it is postive number");
    }
    else if (a == 0)
    {
        printf("it is zero");
    }
    else
    {
        printf("it is negative");
    }
    return 0;
}
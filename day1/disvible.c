#include <stdio.h>
int main()
{
    int i, a;
    printf("Enter the number\n");
    scanf("%d", &a);
    for (i = 2; i < a; i++)
    {
        if (a == 1)
        {
            printf("%d", a);
        }
        else if (a % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
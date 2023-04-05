#include <stdio.h>
int main()
{
    int a[100];
    int i, n, max;
    printf("Enter the no.of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("the Largest number:%d", max);
    return 0;
}
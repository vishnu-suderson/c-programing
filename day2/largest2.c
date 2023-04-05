#include <stdio.h>
int main()
{
    int a[100];
    int i, j, n, max;
    printf("Enter the no.of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (max < a[j])
            {
                max = a[j];
            }
        }
    }
    printf("The 1st largest number: %d\n", max);
    for (i = 0; i < n; i++)
    {
        if (max == a[i])
        {
            a[i] = 0;
        }
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {
            if (max < a[j])
            {
                max = a[j];
            }
        }
    }
    printf("The  2nd largest number: %d\n", max);
}
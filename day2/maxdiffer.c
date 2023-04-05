#include <stdio.h>
int main()
{
    int a[5] = {10, 15, 90, 200, 110};
    int i, j, n, max, temp, new;
    max = a[0];
    temp = a[0];
    n = 5;
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
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (temp > a[j])
            {
                temp = a[j];
            }
        }
    }
    new = max - temp;
    printf("max difference: %d", new);
}
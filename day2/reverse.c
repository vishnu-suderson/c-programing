#include <stdio.h>

int main()
{

    int i = 3;
    int a[4] = {1, 2, 3, 4};
    while (i != -1)
    {
        printf("%d", a[i]);
        i -= 1;
    }

    return 0;
}
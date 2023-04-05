#include <stdio.h>
#include <string.h>
int main()
{
    int i, k, count = 0;
    char a[10];
    printf("count vowel in word");
    scanf("%s", &a);
    k = strlen(a);
    for (i = 0; i < k; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

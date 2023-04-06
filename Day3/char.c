#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, sum = 0;
 
    printf("Enter the string: ");
    fgets(str, 100, stdin);

    for(i = 0; i < strlen(str); i++)
    {
        sum += (int)str[i];
    }

    printf("Sum of all characters: %d\n", sum);
 
    return 0;
}

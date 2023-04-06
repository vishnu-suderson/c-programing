#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

int main()
{
    char str[100];
    int i, len;
    int freq[ASCII_SIZE] = {0};
    char maxChar;
    int maxFreq = 0;
 
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    len = strlen(str);
 
    for(i = 0; i < len; i++)
    {
        if(str[i] != ' ')
        {
            freq[(int)str[i]]++;
        }
    }

    for(i = 0; i < ASCII_SIZE; i++)
    {
        if(freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }
 
    printf("Max repeated character in the string = %c\n", maxChar);
    printf("It occurs %d times\n", maxFreq);
 
    return 0;
}

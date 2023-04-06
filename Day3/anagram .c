#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int freq[26] = {0};
    int len1, len2, i, flag = 1;
 
    printf("Enter first string: ");
    scanf("%s", str1);
 
    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    // Check if lengths of both strings are equal
    if(len1 != len2)
    {
        printf("The two strings are not anagrams\n");
        return 0;
    }

    // Update frequency array for first string
    for(i = 0; i < len1; i++)
    {
        freq[str1[i] - 'a']++;
    }

    // Update frequency array for second string
    for(i = 0; i < len2; i++)
    {
        freq[str2[i] - 'a']--;
    }

    // Check if all elements of frequency array are 0
    for(i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag)
    {
        printf("The two strings are anagrams\n");
    }
    else
    {
        printf("The two strings are not anagrams\n");
    }

    return 0;
}

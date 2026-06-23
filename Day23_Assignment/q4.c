#include <stdio.h>
include <string.h>
int main()
{
    char str[100];
    int i, j, count, maxCount = 0;
    char maxChar;
    printf("Enter a string");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        count = 1;
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j] && str[i] != '' && str[i] != '\n')
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }
    printf("Maximum occurring character = %c\n", maxChar);
    printf("Frequency = %d\n", maxCount);
    return 0;
}
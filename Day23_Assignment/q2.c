#include <stdio.h>
#include <string.h>
int main()
{ char str[100];
    int i, j;
    printf("Enter a string");
    scanf("%s", str);
    for(i = 0; i < strlen(str); i++)
    {
        for(j = i + 1; j < strlen(str); j++)
        {
            if(str[i] == str[j])
            {
                printf("First repeating characterbis %c", str[i]);
                return 0;
            }
        }
    }
    printf("No repeating character found");
    return 0;

}
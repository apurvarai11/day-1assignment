#include <stdio.h>

int main()
 {
    char book[10][30];
    int n, i;

    printf("Enter number of books");
    scanf("%d", &n);

    printf("Enter book names:\n");
    for(i = 0; i < n; i++)
     {
        scanf("%s", book[i]);
    }

    printf("\nBooks in Library\n");
    for(i = 0; i < n; i++)
     {
        printf("%d. %s\n", i + 1, book[i]);
    }

    return 0;
}
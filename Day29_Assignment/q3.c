#include <stdio.h>
#include <string.h>

int main()
 {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string");
    gets(str1);

    do {
        printf("\n1.Length\n2.Copy\n3.Concat\n4.Compare\n5.Exit\n");
        printf("Enter choice");
        scanf("%d", &choice);
        getchar(); 

        switch(choice) {
            case 1:
                printf("Length = %d\n", strlen(str1));
                break;

            case 2:
                printf("Enter second string");
                gets(str2);
                strcpy(str1, str2);
                printf("Copied String: %s\n", str1);
                break;

            case 3:
                printf("Enter second string");
                gets(str2);
                strcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;

            case 4:
                printf("Enter second string");
                gets(str2);
                if(strcmp(str1, str2) == 0)
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Not Equal\n");
                break;

            case 5:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }
     while(choice != 5);

    return 0;
}
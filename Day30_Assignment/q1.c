#include <stdio.h>

int main()
 {
    int roll[10], marks[10], n, i;
    char name[10][30];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) 
    {
        printf("\nEnter Roll No");
        scanf("%d", &roll[i]);

        printf("Enter Name");
        scanf("%s", name[i]);

        printf("Enter Marks ");
        scanf("%d", &marks[i]);
    }

    printf("\nStudent Records\n");
    printf("Roll\tName\tMarks\n");

    for(i = 0; i < n; i++)
     {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }

    return 0;
}
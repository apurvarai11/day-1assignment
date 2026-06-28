#include <stdio.h>

int roll[10], marks[10], n;
char name[10][30];

void addStudents()
 {
    int i;
    printf("Enter number of students");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
     {
        printf("\nEnter Roll No ");
        scanf("%d", &roll[i]);

        printf("Enter Name ");
        scanf("%s", name[i]);

        printf("Enter Marks");
        scanf("%d", &marks[i]);
    }
}

void displayStudents()
 {
    int i;
    printf("\nRoll\tName\tMarks\n");
    for(i = 0; i < n; i++)
     {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
}

void searchStudent()
 {
    int r, i;
    printf("Enter Roll No to Search ");
    scanf("%d", &r);

    for(i = 0; i < n; i++)
     {
        if(roll[i] == r)
         {
            printf("Name: %s\n", name[i]);
            printf("Marks: %d\n", marks[i]);
            return;
        }
    }
    printf("Student Not Found\n");
}

int main()
 {
    int choice;

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice");
        scanf("%d", &choice);

        switch(choice)
         {
            case 1:
                addStudents();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }
     while(choice != 4);

    return 0;
}
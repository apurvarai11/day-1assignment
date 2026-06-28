#include <stdio.h>

int main()
 {
    int id[10], salary[10], n, i;
    char name[10][30];

    printf("Enter number of employees ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) 
    {
        printf("\nEnter Employee ID");
        scanf("%d", &id[i]);

        printf("Enter Employee Name");
        scanf("%s", name[i]);

        printf("Enter Salary ");
        scanf("%d", &salary[i]);
    }

    printf("\nEmployee Records\n");
    printf("ID\tName\tSalary\n");

    for(i = 0; i < n; i++)
     {
        printf("%d\t%s\t%d\n", id[i], name[i], salary[i]);
    }

    return 0;
}
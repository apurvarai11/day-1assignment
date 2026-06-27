#include <stdio.h>
int main()
{
    int id;
    char name[50];
    float salary;
    printf("Every Employee ID");
    scanf("%d", &id);
    printf("Enter Employee Name");
    scanf("%s", name);
    printf("Enter Salary");
    scanf("%f", &salary);
    printf("\n----- Employee Details-----\n");
    printf("Employee ID %d\n", id);
    printf("Employee Name %s\n", name);
    printf("Salary %2f\n", salary);
    return 0;
}
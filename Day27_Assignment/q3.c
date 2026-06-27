#include <stdio.h>
int main()
{
    char name[50];
    float basicSalary, bonus, totalSalary;
    printf("Enter Employee Name");
    scanf("%s", name);
    printf("Enter Basic Salary");
    scanf("%f", &basicSalary);
    bonus = basicSalary * 0.10;
    totalSalary = basicSalary + bonus;
    printf("\n----- Salary Details -----\n");
    printf("Employee Name %s\n", name);
    printf("Basic Salary %.2f\n", basicSalary);
    printf("Bonus %.2f\n", bonus);
    printf("Total Salary %.2f\n", totalSalary);
    return 0;

}
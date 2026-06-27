#include <stdio.h>
int main()
{
    char name[50];
    int m1, m2, m3, total;
    float percentage;
    printf("Enter Student Name");
    scanf("%s", name);
    printf("Enter marks of 3 subjects");
    scanf("%d %d %d", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    percentage = total / 3.0;
    printf("\n----- Marksheet -----\n");
    printf("Name %s\n", name);
    printf("Total Marks %d\n", total);
    printf("Percentage %.2f%%\n", percentage);
    if (percentage >= 40)
    printf("Result pass\n");
    else
    printf("Result Fail\n");
    return 0;


}
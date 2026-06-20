#include <stdio.h>
int maximum(inta, intb)
{
    if (a > b)
    return a;
    else 
    return b;
}
int main()
{
    int num1, num2, max;
    printf("Enter two nnumbers");
    scanf("%d %d", &num1, &num2);
    max = maximum(num1, num2);
    printf("Maximum number = %d", max);
    return 0;
}
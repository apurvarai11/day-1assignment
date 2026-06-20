#include <stdio.h>
#include <math.h>
int isArmstrong(int num)
{
    int original = num, sum = 0, digits = 0, rem;
    int temp = num;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    if (sum == original)
    return 1;
    else 
    return 0;
}
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    if (isArmstrong(num))
    printf("Armstrong Number");
    else
    printf("Not an Armstrong Number");
    return 0;
}
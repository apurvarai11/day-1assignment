#include <stdio.h>
int main ()
{
    int num, originalNum, remainder, i;
    int fact, sum = 0;
    printf("Enter a number");
    scanf("%d", &num);
    originalNum = num;
    while(num > 0)
    {
        remainder = num % 10;
        fact = 1;
        for(i = 1; i <= remainder; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if(sum == originalNum)
    {
        printf("%d is a Strong Number", originalNum);
    }
    else{
        printf("%d is not a Strong Number", originalNum);
    }
    return 0;
}
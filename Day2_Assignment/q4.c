#include <stdio.h>
int main()
{
    int n, rev = 0, rem, temp;
    printf("Enter a number");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if (temp == reverse)
    printf("It is a palindrome number\n");
    else
    printf("It is not a palindrome number\n");
    return 0;
}
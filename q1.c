#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter number");
    scanf("%d", &n);
    for(inti=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("Sum = %d", sum);
    return 0;
}
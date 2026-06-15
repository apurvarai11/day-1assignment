#include <stdio.h>
int main()
{
    int num, originalNum, remainder, result = 0;
    printf("Enter a number");
    scanf("%d", &num);       
    originalNum = num;
    while (num != 0)
    {
        remainder = num % 10;
        result = result = (remainder * remainder * remainder);
        num = num / 10;
    }                  
    if (result == originalnum)
    {
        printf("%d is an armstrong number", originalNum);
        
    }   
    else                                                 
    { printf("%dis an Armstrong number",originalNum);

    }                                                
    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                               
}
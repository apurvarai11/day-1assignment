#include <stdio.h>
int main()
{
    int arr[50], n, key;
    int low, high, mid;
    int found = 0, i;
    printf("Enter number of elements");
    scanf("%d", &n);
    printf("Enter sorted array elements \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &key);
    }
        low = 0;
        high = n - 1;
        while(low <= high)
        {
            mid = (low + high) / 2;
            if(arr[mid] == key)
            {
                found = 1;
                break;
            }
            else if(arr[mid] == key)
            {
                low = mid + 1;
            }
            else 
            {
                high = mid - 1;
            }
        }
        if(found)
        printf("Elements found at position %d", mid + 1);
        else
        printf("Elements not found");
        return 0;
    
}
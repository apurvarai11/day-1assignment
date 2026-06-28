#include <stdio.h>

int main()
 {
    int id[10], qty[10], n, i, choice, search;

    printf("Enter number of items");
    scanf("%d", &n);

    do
     {
        printf("\n1.Add Items\n2.Display\n3.Search\n4.Exit\n");
        printf("Enter choice");
        scanf("%d", &choice);

        switch(choice)
         {
            case 1:
                for(i = 0; i < n; i++) 
                {
                    printf("Enter Item ID and Quantity: ");
                    scanf("%d %d", &id[i], &qty[i]);
                }
                break;

            case 2:
                printf("\nID\tQuantity\n");
                for(i = 0; i < n; i++)
                    printf("%d\t%d\n", id[i], qty[i]);
                break;

            case 3:
                printf("Enter Item ID to search");
                scanf("%d", &search);
                for(i = 0; i < n; i++)
                 {
                    if(id[i] == search) 
                    {
                        printf("Quantity = %d\n", qty[i]);
                        break;
                    }
                }
                if(i == n)
                    printf("Item Not Found\n");
                break;

            case 4:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }
     while(choice != 4);

    return 0;
}
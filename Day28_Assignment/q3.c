#include <stdio.h>
struct Ticket
{
    char name[50];
    int tickets;
}
int main()
{
    struct Ticket t;
    int choice;
    int totalSeats = 50;
    while (1)
    {
        printf("\n--- Ticket Booking System---\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Display Details\n");
        printf("4. Exit\n");
        printf("Enter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            printf("Enter Name");
            scanf("%[^\n]", t.name);
            printf("Enter Number of Tickets");
            scanf("%d", &t.tickets);
            if (t.tickets <= totalSeats)
            {
                totalSeats -= t.tickets;
                printf("Ticket Booked Successfully!\n");
            }
            else 
            {
                printf("Not Enough Seats Available!\n");

            }
            break;
            case 2:
            printf("Enter Number of Tickets to Cancel");
            scanf("%d", &t.tickets);
            totalSeats += t.tickets;
            printf("Ticket Cancelled Successfully!\n");
            break;
            case 3:
            printf("\nPassenger Name %s\n", t.name);
            printf("Booked Tickets %d\n", t.tickets);
            printf("Avaialblr Seats %d\n", totalSeats);
            break;
            case 4:
            printf("Thank You!\n");
            return 0;
            default;
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}
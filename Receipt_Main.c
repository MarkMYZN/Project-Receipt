#include <stdio.h>
#include <windows.h>

void cart() {
    char product[256];
    int quantity[256];
    float price[256];
}

void checkOut() {
    printf("You are in the Checkout Area!!\n");
    printf("Here is your receipt:\n");
    cart();
}

void displayMainChoices() {
    printf("Where would you like to go?\n");
    printf("(1) Beverages Aisle\n");
    printf("(2) Cleaning Supplies Aisle\n");
    printf("(3) Personal Care Aisle\n");
    printf("(4) Breakfasts Aisle\n");
    printf("(5) Frozen Aisle\n");
}

void beverageAisle() {
    printf("(1) Product 1      Price\n");
    printf("(2) Cleaning Supplies Aisle\n");
    printf("(3) Personal Care Aisle\n");
    printf("(4) Breakfasts Aisle\n");
    printf("(5) Frozen Aisle\n");
}

void exitOptions() {
    int toLobby;
    printf("Ready to head out?\n");
    printf("(8) Go back to lobby\n");
    printf("(9) Go to checkout\n");
    printf("Enter your choice: ");
    scanf("%d", &toLobby);
    switch (toLobby) {
        case 8:
            displayMainChoices();
        case 9:
            checkOut();
        default:
            system("cls");
            printf("Invalid choice.\n");
            exitOptions();
    }
}


int main() {

    // Welcome Screens
    printf("Welcome To [-grocery name-] !\n");

    // Displays the main selection and to be called
    // later if needed
    displayMainChoices();

    int displayMainChoices, beverageShelf;

    printf("Enter your choice: ");
    scanf("%d", &displayMainChoices);

    switch (displayMainChoices) {

        case 1:
            system("cls");
            printf("You are in the Beverages Aisle!\n\n\n\n");
            beverageAisle();
            exitOptions();
        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
        break;
    }

    printf("Press any key to continue...\n");
    getchar();
    return 0;
}
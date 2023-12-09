#include <stdio.h>
#include <windows.h>

void displayMain() {
    printf("Where would you like to go?\n");
    printf("(1) Beverages Aisle\n");
    printf("(2) Cleaning Supplies Aisle\n");
    printf("(3) Personal Care Aisle\n");
    printf("(4) Breakfasts Aisle\n");
    printf("(5) Frozen Aisle\n");
}

void displayFunc() {
    int displayFunction;
    scanf("%d", &displayFunction);

    switch (displayFunction) {
        case 1: // beverage aisle
            system("cls");
            printf("You are in Beverage Aisle.\n");
            printf("Items in shelf:\n");
            beverage();

    }
}

void beverage() {
    printf("(1) Product 1..........$2\n");
    printf("(2) Product 2..........$3\n");
    printf("(3) Product 3..........$1\n");
    printf("(4) Product 4..........$4\n");
    printf("(5) Product 5..........$2\n");
    beverageFunc();
}

void beverageFunc() {
    int bev;
    scanf("%d", &bev);

    switch (bev) {
        case 1: 
            system("cls");
            printf("Item Added to Cart.\n");
            printf("\nReady to head out?\n");
            printf("(8) Go back to lobby\n");
            printf("(9) Go to checkout\n");
            printf("Enter your choice: ");
            exitLobby();
            break;
        case 2:
            system("cls");
            printf("Item Added to Cart.\n");
            printf("\nReady to head out?\n");
            printf("(8) Go back to lobby\n");
            printf("(9) Go to checkout\n");
            printf("Enter your choice: ");
            exitLobby();
            break;
        case 3:
            system("cls");
            printf("Item Added to Cart.\n");
            printf("\nReady to head out?\n");
            printf("(8) Go back to lobby\n");
            printf("(9) Go to checkout\n");
            printf("Enter your choice: ");
            exitLobby();
            break;
        case 4:
            system("cls");
            printf("Item Added to Cart.\n");
            printf("\nReady to head out?\n");
            printf("(8) Go back to lobby\n");
            printf("(9) Go to checkout\n");
            printf("Enter your choice: ");
            exitLobby();
            break;
        case 5:
            system("cls");
            printf("Item Added to Cart.\n");
            printf("\nReady to head out?\n");
            printf("(8) Go back to lobby\n");
            printf("(9) Go to checkout\n");
            printf("Enter your choice: ");
            exitLobby();
            break;
    }
}

void checkoutFunc() {
    system("cls");
    printf("You are in Checkout Area.\n");
    printf("Printing receipt....\nPlease wait...\n");
    printf("\n\n\n\n\nTHIS IS THE RECEIPT\n\n\n\n\n");
    printf("\nThank you for shopping with us!\n");
    getchar();
}

void exitLobby() {
    int exitLob;
    scanf("%d", &exitLob);

    switch (exitLob) {
        case 8: // back to main displayfunc
            system("cls");
            displayMain();
            displayFunc();
        case 9: // checkout area
            checkoutFunc();
        case 0: // stays in area
            beverageFunc();
    } 
}

int main() {
    printf("Welcome to Shop.");
    displayMain();
    displayFunc();
    return 0;
}

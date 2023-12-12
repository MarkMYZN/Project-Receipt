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
        case 2: // beverage aisle
            system("cls");
            printf("You are in Beverage Aisle.\n");
            printf("Items in shelf:\n");
            beverage();
        case 3: // beverage aisle
            system("cls");
            printf("You are in Beverage Aisle.\n");
            printf("Items in shelf:\n");
            beverage();
        case 4: // beverage aisle
            system("cls");
            printf("You are in Beverage Aisle.\n");
            printf("Items in shelf:\n");
            beverage();
    }
}

//Aisles
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
void cleaning() {
    printf("(1) Product 1..........$2\n");
    printf("(2) Product 2..........$3\n");
    printf("(3) Product 3..........$1\n");
    printf("(4) Product 4..........$4\n");
    printf("(5) Product 5..........$2\n");
    cleaningFunc();
}
void cleaningFunc() {
    int clean;
    scanf("%d", &clean);

    switch (clean) {
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
void personal() {
    printf("(1) Product 1..........$2\n");
    printf("(2) Product 2..........$3\n");
    printf("(3) Product 3..........$1\n");
    printf("(4) Product 4..........$4\n");
    printf("(5) Product 5..........$2\n");
    personalFunc();
}
void personalFunc() {
    int personl;
    scanf("%d", &personl);

    switch (personl) {
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
void breakfast() {
    printf("(1) Product 1..........$2\n");
    printf("(2) Product 2..........$3\n");
    printf("(3) Product 3..........$1\n");
    printf("(4) Product 4..........$4\n");
    printf("(5) Product 5..........$2\n");
    breakfastFunc();
}
void breakfastFunc() {
    int brkfst;
    scanf("%d", &brkfst);

    switch (brkfst) {
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
void frozen() {
    printf("(1) Product 1..........$2\n");
    printf("(2) Product 2..........$3\n");
    printf("(3) Product 3..........$1\n");
    printf("(4) Product 4..........$4\n");
    printf("(5) Product 5..........$2\n");
    frozenFunc();
}
void frozenFunc() {
    int froze;
    scanf("%d", &froze);

    switch (froze) {
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
    printf("placholdder for receipt");
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

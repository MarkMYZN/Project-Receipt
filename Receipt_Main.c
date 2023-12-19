#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>

struct Product
{
    char name[50];
    double price;
};

struct CartItem
{
    struct Product product;
    int quantity;
};

const double VAT_RATE = 0.12;

void displayOptions(int aisleNumber);

void displayAisles()
{
    printf("What do you have in mind?\n");
    printf("1. Produce\n");
    printf("2. Dairy\n");
    printf("3. Bakery\n");
    printf("4. Meat\n");
    printf("5. Frozen Food\n");
    printf("6. Canned Goods\n");
    printf("7. Snacks\n");
    printf("8. Beverages\n");
    printf("9. Pasta & Noodles\n");
    printf("10. Rice\n");
}

void displayOptions(int aisleNumber)
{
    switch (aisleNumber)
    {
    case 1:
        system("cls");
        printf("Produce:\n");
        printf("1. Apple  - Php 346.71 / Kilo\n");
        printf("2. Potato - Php 109 / Kilo\n");
        printf("3. Red Onion - Php 142 / Kilo\n");
        printf("4. Garlic - Php 55 / Kilo\n");
        printf("5. Watermelon - Php 450/ Kilo\n");
        printf("6. Banana - Php 65/ Kilo\n");
        printf("7. Coffee Beans - Php 132 / Kilo\n");
        break;
    case 2:
        system("cls");
        printf("Dairy:\n");
        printf("1. Fresh Milk - Php 156\n");
        printf("2. Ice Cream - Php 150\n");
        printf("3. Butter - Php 50\n");
        printf("4. Cheese - Php 65\n");
        printf("5. Yogurt - Php 35\n");
        break;
    case 3:
        system("cls");
        printf("Bakery:\n");
        printf("1. Bread - Php 50\n");
        printf("2. Pastry - Php 100\n");
        printf("3. Cookies - Php 200\n");
        printf("4. Biscuits - Php 35\n");
        printf("5. Baguette - Php 115\n");
        break;
    case 4:
        system("cls");
        printf("Meat:\n");
        printf("1. Pork - Php 250 / Kilo\n");
        printf("2. Chicken  - Php 170 / Kilo\n");
        printf("3. Beef - Php 381 / Kilo\n");
        printf("4. Fish - Php 120 / Kilo\n");
        break;
    case 5:
        system("cls");
        printf("Frozen Food:\n");
        printf("1. Frozen Vegetable - Php 229\n");
        printf("2. Frozen Meals - Php 285\n");
        printf("3. Sushi - Php 119\n");
        printf("4. Hotdog - Php 134\n");
        printf("5. Cream Dory - Php 156\n");
        printf("6. Bacon - Php 150\n");
        break;
    case 6:
        system("cls");
        printf("Canned Goods:\n");
        printf("1. Canned Vegetables - Php 119\n");
        printf("2. Canned Fruits - Php 111\n");
        printf("3. Sardines - Php 18 / pcs\n");
        printf("4. Corned Beef - Php 39 / pcs\n");
        printf("5. Meat Loaf - Php 35 / pcs\n");
        printf("6. Mackerel - Php 32.90 / pcs\n");
        break;
    case 7:
        system("cls");
        printf("Snacks:\n");
        printf("1. Chips - Php 26\n");
        printf("2. Biscuit - Php 45\n");
        printf("3. Pistachio - Php 499\n");
        printf("4. Peanuts - Php 30 / Pack\n");
        printf("5. Fish Cracker - Php 132 / Pack\n");
        printf("6. Pancit Canton - Php 16.50 / pcs\n");
        break;
    case 8:
        system("cls");
        printf("Beverages:\n");
        printf("1. Water  - Php 20\n");
        printf("2. Energy Drink - Php 31\n");
        printf("3. Softdrinks - Php 65\n");
        printf("4. Beer - Php 63\n");
        printf("5. Gin - Php 79\n");
        break;
    case 9:
        system("cls");
        printf("Pasta & Noodles:\n");
        printf("1. Spaghetti - Php 129.50 / Kilo\n");
        printf("2. Macaroni - Php 34.50 / Kilo\n");
        printf("3. Pancit Bihon - Php 40\n");
        printf("4. Ramen Noodles - Php 14.25\n");
        printf("5. Fried Noodles - Php 18.50\n");
        printf("6. Cup Noodles - Php 21.50\n");
        break;
    case 10:
        system("cls");
        printf("Rice :\n");
        printf("1. Regular-Milled - Php 51 / Kilo\n");
        printf("2. Local Premium - Php 61 / Kilo\n");
        break;
    default:
        printf("Invalid aisle number\n");
        return;
    }
}

void generateReceipt(const struct CartItem cart[], int cartSize, const char* storeName, const char* cashierName)
{
    printf("=====================================================\n");
    printf("                      JOJO Store                     \n");
    printf("=====================================================\n");

    time_t t;
    time(&t);
    struct tm* localTime = localtime(&t);

    printf("Trans.Date: %02d/%02d/%04d %02d:%02d:%02d\n", localTime->tm_mday, localTime->tm_mon + 1, localTime->tm_year + 1900,
           localTime->tm_hour, localTime->tm_min, localTime->tm_sec);
    printf("Cashier: %s\n", cashierName);
    printf("=====================================================\n");

    printf("Product\t\t\tQuantity\t       Amount\n");
    printf("-----------------------------------------------------\n");

    double totalAmount = 0.0;
    int i;
    for (i = 0; i < cartSize; ++i)
    {
        const struct CartItem* item = &cart[i];
        double amount = item->product.price * item->quantity;
        totalAmount += amount;
        printf("%-26s %-15dPhp  %-12.2f\n", item->product.name, item->quantity, amount);
    }

    printf("-----------------------------------------------------\n");

    double vat = totalAmount * VAT_RATE;
    double grandTotal = totalAmount + vat;

    printf("%-39s    Php %-15.2f\n", "Total Amount", totalAmount);
    printf("%-39s    Php %-15.2f\n", "VAT (12%)", vat);
    printf("%-39s    Php %-15.2f\n", "Grand Total", grandTotal);

    printf("=====================================================\n");
    printf("       Thank you for shopping at %s!            \n", storeName);
    printf("=====================================================\n");
}


int main()
{
    struct CartItem cart[100]; // Assuming a maximum of 100 items in the cart
    int cartSize = 0;
    const char* storeName = "JOJO Store";
    const char* cashierName = "Jhon Mark Mostrales , Mark Joseph Sumalde";

    // Welcome message from the cashier
    printf("\n                    Welcome to %s!\n                    \n", storeName);
    printf("Your cashier today is %s.\n                 \n", cashierName);
    printf("                     Enjoy your shopping!\n                  \n");

    while (1)
    {
        displayAisles();

        int chosenAisle;
        printf("\nsEnter the aisle number (0 to finish shopping): ");
        scanf("%d", &chosenAisle);

        if (chosenAisle == 0)
        {
            system("cls");
            break;
        }

        switch (chosenAisle)
        {
        case 1:
            printf("You are in Produce aisle\n");
            break;
        case 2:
            printf("You are in Dairy aisle\n");
            break;
        case 3:
            printf("You are in Bakery aisle\n");
            break;
        case 4:
            printf("You are in Meat aisle\n");
            break;
        case 5:
            printf("You are in Frozen Food aisle\n");
            break;
        case 6:
            printf("You are in Canned Goods aisle\n");
            break;
        case 7:
            printf("You are in Snacks aisle\n");
            break;
        case 8:
            printf("You are in Beverages aisle\n");
            break;
        case 9:
            printf("You are in Pasta & Noodles aisle\n");
            break;
        case 10:
            printf("You are in Rice aisle\n");
            break;
        default:
            system("cls");
            printf("Invalid aisle number\n");
            continue;
        }

        displayOptions(chosenAisle);

        int selectedOption;
        printf("\nChoose a product number to add to your cart.\n (0 to choose another aisle): ");
        scanf("%d", &selectedOption);

        if (selectedOption == 0)
        {
            continue;
        }

        int quantity;
        printf("Enter the quantity: ");
        scanf("%d", &quantity);
        system("cls");
        struct CartItem item;

        switch (chosenAisle)
        {
        case 1:
            switch (selectedOption)
            {
            case 1:
                strcpy(item.product.name, "Apple");
                item.product.price = 346.71;
                break;
            case 2:
                strcpy(item.product.name, "Potato");
                item.product.price = 109;
                break;
            case 3:
                strcpy(item.product.name, "Red Onion");
                item.product.price = 142;
                break;
            case 4:
                strcpy(item.product.name, "Garlic");
                item.product.price = 55;
                break;
            case 5:
                strcpy(item.product.name, "Watermelon");
                item.product.price = 450;
                break;
            case 6:
                strcpy(item.product.name, "Banana");
                item.product.price = 65;
                break;
            case 7:
                strcpy(item.product.name, "Coffee Beans");
                item.product.price = 132;
                break;
            default:
                system("cls");
                printf("Invalid product number\n");
                continue;
            }
            break;
        case 2:
            switch (selectedOption)
            {
            case 1:
                strcpy(item.product.name, "Fresh Milk");
                item.product.price = 156;
                break;
            case 2:
                strcpy(item.product.name, "Ice Cream");
                item.product.price = 150;
                break;
            case 3:
                strcpy(item.product.name, "Butter");
                item.product.price = 50;
                break;
            case 4:
                strcpy(item.product.name, "Cheese");
                item.product.price = 65;
                break;
            case 5:
                strcpy(item.product.name, "Yogurt");
                item.product.price = 35;
                break;
            default:
                system("cls");
                printf("Invalid product number\n");
                continue;
            }
            break;
        case 3:
            switch (selectedOption)
            {
            case 1:
                strcpy(item.product.name, "Bread");
                item.product.price = 50;
                break;
            case 2:
                strcpy(item.product.name, "Pastry");
                item.product.price = 100;
                break;
            case 3:
                strcpy(item.product.name, "Cookies");
                item.product.price = 200;
                break;
            case 4:
                strcpy(item.product.name, "Biscuits");
                item.product.price = 35;
                break;
            case 5:
                strcpy(item.product.name, "Baguette");
                item.product.price = 115;
                break;
            default:
                system("cls");
                printf("Invalid product number\n");
                continue;
            }
            break;
         case 4:
            switch (selectedOption)
            {
            case 1:
                strcpy(item.product.name, "Pork");
                item.product.price = 250;
                break;
            case 2:
                strcpy(item.product.name, "Chicken");
                item.product.price = 170;
                break;
            case 3:
                strcpy(item.product.name, "Beef");
                item.product.price = 381;
                break;
            case 4:
                strcpy(item.product.name, "Fish");
                item.product.price = 120;
                break;
            default:
                system("cls");
                printf("Invalid product number\n");
                continue;
            }
            break;
        case 5:
            switch (selectedOption)
            {
            case 1:
                strcpy(item.product.name, "Frozen Vegetable");
                item.product.price = 229;
                break;
            case 2:
                strcpy(item.product.name, "Frozen Meals");
                item.product.price = 285;
                break;
            case 3:
                strcpy(item.product.name, "Sushi");
                item.product.price = 119;
                break;
            case 4:
                strcpy(item.product.name, "Hotdog");
                item.product.price = 134;
                break;
            case 5:
                strcpy(item.product.name, "Cream Dory");
                item.product.price = 156;
                break;
            case 6:
                strcpy(item.product.name, "Bacon");
                item.product.price = 150;
                break;
            default:
                system("cls");
                printf("Invalid product number\n");
                continue;
            }
            break;
        case 6:
            switch (selectedOption)
            {
            case 1:
                strcpy(item.product.name, "Canned Vegetables");
                item.product.price = 119;
                break;
            case 2:
                strcpy(item.product.name, "Canned Fruits");
                item.product.price = 111;
                break;
            case 3:
                strcpy(item.product.name, "Sardines");
                item.product.price = 18;
                break;
            case 4:
                strcpy(item.product.name, "Corned Beef");
                item.product.price = 39;
                break;
            case 5:
                strcpy(item.product.name, "Meat Loaf");
                item.product.price = 35;
                break;
            case 6:
                strcpy(item.product.name, "Mackerel");
                item.product.price = 32.90;
                break;
            default:
                system("cls");
                printf("Invalid product number\n");
                continue;
            }
            break;
        case 7:
            switch (selectedOption)
            {
            case 1:
                strcpy(item.product.name, "Chips");
                item.product.price = 26;
                break;
            case 2:
                strcpy(item.product.name, "Biscuit");
                item.product.price = 45;
                break;
            case 3:
                strcpy(item.product.name, "Pistachio");
                item.product.price = 499;
                break;
            case 4:
                strcpy(item.product.name, "Peanuts");
                item.product.price = 30;
                break;
            case 5:
                strcpy(item.product.name, "Fish Cracker");
                item.product.price = 132;
                break;
            case 6:
                strcpy(item.product.name, "Pancit Canton");
                item.product.price = 16.50;
                break;
            default:
                system("cls");
                printf("Invalid product number\n");
                continue;
            }
            break;
        case 8:
            switch (selectedOption)
            {
            case 1:
                strcpy(item.product.name, "Water");
                item.product.price = 20;
                break;
            case 2:
                strcpy(item.product.name, "Energy Drink");
                item.product.price = 31;
                break;
            case 3:
                strcpy(item.product.name, "Softdrinks");
                item.product.price = 65;
                break;
            case 4:
                strcpy(item.product.name, "Beer");
                item.product.price = 63;
                break;
            case 5:
                strcpy(item.product.name, "Gin");
                item.product.price = 79;
                break;
            default:
                system("cls");
                printf("Invalid product number\n");
                continue;
            }
            break;
        case 9:
            switch (selectedOption)
            {
            case 1:
                strcpy(item.product.name, "Spaghetti");
                item.product.price = 129.50;
                break;
            case 2:
                strcpy(item.product.name, "Macaroni");
                item.product.price = 34.50;
                break;
            case 3:
                strcpy(item.product.name, "Pancit Bihon");
                item.product.price = 40;
                break;
            case 4:
                strcpy(item.product.name, "Ramen Noodles");
                item.product.price = 14.25;
                break;
            case 5:
                strcpy(item.product.name, "Fried Noodles");
                item.product.price = 18.50;
                break;
            case 6:
                strcpy(item.product.name, "Cup Noodles");
                item.product.price = 21.50;
                break;
            default:
                system("cls");
                printf("Invalid product number\n");
                continue;
            }
            break;
        case 10:
            switch (selectedOption)
            {
            case 1:
                strcpy(item.product.name, "Regular-Milled");
                item.product.price = 51;
                break;
            case 2:
                strcpy(item.product.name, "Local Premium");
                item.product.price = 61;
                break;
            default:
                printf("Invalid product number\n");
                continue;
            }
            break;
        default:
            system("cls");
            printf("Invalid aisle number\n");
            continue;
        }

        item.quantity = quantity;
        cart[cartSize] = item;
        cartSize++;

        printf("\nProduct added to your cart!\n\n");
    }

    generateReceipt(cart, cartSize, storeName, cashierName);

    return 0;
}

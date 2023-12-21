#include <stdio.h>
#include <string.h>
#include <windows.h>

#define MAX_ITEMS 10

float generateRandomFloat(float min, float max) {
    return min + ((float)rand() / RAND_MAX) * (max - min);
}
char name[MAX_ITEMS][256];
int quantity[MAX_ITEMS];
float price[MAX_ITEMS];
int currentIndex = 0; 

//displays the main screen and its functions
void display() {
    printf("Where would you like to go?");
    printf("(1) Aisle1 ");
    printf("(2) Aisle2 ");
    printf("(3) Aisle3 ");
    printf("(4) Aisle4 ");
    printf("(5) Aisle5 ");
    displayFunc();
}
void displayFunc(){
    int displayChoice;

    switch (displayChoice) {
        case:1
            system("cls");
            printf("You are inside 'Aisle1'. ");
            Aisle1();
            Aisle1Func();
        case:2
            system("cls");
            printf("You are inside 'Aisle2'. ");
            Aisle2();
            Aisle2Func();
        case:3
            system("cls");
            printf("You are inside 'Aisle3'. ");
            Aisle3();
            Aisle3Func();
        case:4
            system("cls");
            printf("You are inside 'Aisle4'. ");
            Aisle4();
            Aisle4Func();
        case:5
            system("cls");
            printf("You are inside 'Aisle5'. ");
            Aisle5();
            Aisle5Func();  
    };
}

//Aisles
void Aisle1() {
    system("cls");
    printf("You are inside 'Aisle1'.\n");
    printf("Items inside this aisle are:\n");
    printf("(1) Product1");
    printf("(2) Product1");
    printf("(3) Product1");
    printf("(4) Product1");
    printf("(5) Product1");
    Aisle1Func()
}
void Aisle1Func(); {
        int Aisle1Choice;

        switch(Aisle1Choice) {
            case 1:
                system("cls");
                for (int i = 0; i < MAX_ITEMS; ++i) {
                    sprintf(name[currentIndex], " item name will be replaced here ", currentIndex + 1);
                    quantity[currentIndex] = currentIndex + 1;
                    price[currentIndex] = generateRandomFloat(1.0, 10.0) * (currentIndex + 1);
                    currentIndex++;
                    if (currentIndex >= MAX_ITEMS) {
                        break;
                    }
                }
                printf("Item has been added to cart.\n");
                // checkoutFunc
                // gobackFunc
            case:2
                system("cls");
                for (int i = 0; i < MAX_ITEMS; ++i) {
                    sprintf(name[currentIndex], " item name will be replaced here ", currentIndex + 1);
                    quantity[currentIndex] = currentIndex + 1;
                    price[currentIndex] = generateRandomFloat(1.0, 10.0) * (currentIndex + 1);
                    currentIndex++;
                    if (currentIndex >= MAX_ITEMS) {
                        break;
                    }
                }
                printf("Item has been added to cart.\n");
                // checkoutFunc
                // gobackFunc
            case:3
                system("cls");
                for (int i = 0; i < MAX_ITEMS; ++i) {
                    sprintf(name[currentIndex], " item name will be replaced here ", currentIndex + 1);
                    quantity[currentIndex] = currentIndex + 1;
                    price[currentIndex] = generateRandomFloat(1.0, 10.0) * (currentIndex + 1);
                    currentIndex++;
                    if (currentIndex >= MAX_ITEMS) {
                        break;
                    }
                }
                printf("Item has been added to cart.\n");
                // checkoutFunc
                // gobackFunc
            case:4
                system("cls");
                for (int i = 0; i < MAX_ITEMS; ++i) {
                    sprintf(name[currentIndex], " item name will be replaced here ", currentIndex + 1);
                    quantity[currentIndex] = currentIndex + 1;
                    price[currentIndex] = generateRandomFloat(1.0, 10.0) * (currentIndex + 1);
                    currentIndex++;
                    if (currentIndex >= MAX_ITEMS) {
                        break;
                    }
                }
                printf("Item has been added to cart.\n");
                // checkoutFunc
                // gobackFunc
            case:5
                system("cls");
                for (int i = 0; i < MAX_ITEMS; ++i) {
                    sprintf(name[currentIndex], " item name will be replaced here ", currentIndex + 1);
                    quantity[currentIndex] = currentIndex + 1;
                    price[currentIndex] = generateRandomFloat(1.0, 10.0) * (currentIndex + 1);
                    currentIndex++;
                    if (currentIndex >= MAX_ITEMS) {
                        break;
                    }
                }
                printf("Item has been added to cart.\n");
                // checkoutFunc
                // gobackFunc
            
        }
        
}


void Aisle2() {
    printf("");
}
void Aisle3() {
    printf("");
}
void Aisle4() {
    printf("");
}
void Aisle5() {
    printf("");
}

void itemClass {
    struct items {
        char itemName[256];
        float price;
    };
    //place logic here
}




int main() {
    srand(time(NULL));
    float randomFloat = generateRandomFloat(1.0, 100.0);
    system("cls");
    printf("Welcome To Store.\n");
    printf("\nWhere would you like to go?\n");
    display();

};

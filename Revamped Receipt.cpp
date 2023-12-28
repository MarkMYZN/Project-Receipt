#include <stdio.h>
#include <windows.h>
#include <time.h>

#define MAX 10

class cart {
public:
    float generateRandomFloat(float min, float max) {
        return min + ((float)rand() / RAND_MAX) * (max - min);
    }
public:
    char name[MAX][256];
    int quantity[MAX];
    float price[MAX];
    int currentIndex = 0;

public:
    void incrementIndex() {
        currentIndex++;
    };
    void userCart() {};
};

class showAisles {
public:
    void aisle1() {
            system("cls");
            printf("You are inside 'Aisle1'.\n");
            printf("Items inside this aisle are:\n");
            printf("(1) Product1\n");
            printf("(2) Product2\n");
            printf("(3) Product3\n");
            printf("(4) Product4\n");
            printf("(5) Product5\n");
    };
    void aisle2() {system("cls");
            printf("You are inside 'Aisle2'.\n");
            printf("Items inside this aisle are:\n");
            printf("(1) Product1\n");
            printf("(2) Product2\n");
            printf("(3) Product3\n");
            printf("(4) Product4\n");
            printf("(5) Product5\n");
    };
    void aisle3() {system("cls");
            printf("You are inside 'Aisle3'.\n");
            printf("Items inside this aisle are:\n");
            printf("(1) Product1\n");
            printf("(2) Product2\n");
            printf("(3) Product3\n");
            printf("(4) Product4\n");
            printf("(5) Product5\n");
    };
    void aisle4() {system("cls");
            printf("You are inside 'Aisle4'.\n");
            printf("Items inside this aisle are:\n");
            printf("(1) Product1\n");
            printf("(2) Product2\n");
            printf("(3) Product3\n");
            printf("(4) Product4\n");
            printf("(5) Product5\n");
    };
    void aisle5() {system("cls");
            printf("You are inside 'Aisle5'.\n");
            printf("Items inside this aisle are:\n");
            printf("(1) Product1\n");
            printf("(2) Product2\n");
            printf("(3) Product3\n");
            printf("(4) Product4\n");
            printf("(5) Product5\n");
    };
};

class aisleFunc {
public:
    void aisle1Func() {
        int choice;

        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 2:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 3:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 4:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 5:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
        };
    };
    void aisle2Func() {
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 2:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 3:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 4:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 5:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
        };
    };
    void aisle3Func() {
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 2:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 3:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 4:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 5:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
        };
    };
    void aisle4Func() {
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 2:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 3:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 4:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 5:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
        };
    };
    void aisle5Func() {
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 2:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 3:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 4:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
            case 5:
                system("cls");
                for (int i = 0; i < MAX; ++i) {
                        sprintf(cart{}.name[cart{}.currentIndex], " item name will be replaced here ", cart{}.currentIndex + 1);
                        cart{}.quantity[cart{}.currentIndex] = cart{}.currentIndex + 1;
                        cart{}.price[cart{}.currentIndex] = cart{}.generateRandomFloat(1.0, 10.0) * (cart{}.currentIndex + 1);
                        cart{}.incrementIndex();
                        if (cart{}.currentIndex >= MAX) {
                            break;
                        }
                    }
                printf("Item has been added to cart.\n");
                //checkout logic
                //back to lobby logic
                break;
        };
    };
};

class showMenuFunc {
    public:
    void menuFunc() {
        int menuchoice;
        scanf("%d", &menuchoice);
        switch (menuchoice) {
            case 1:
                system("cls");
                showAisles{}.aisle1();
                aisleFunc{}.aisle1Func();
                break;
            case 2:
                system("cls");
                showAisles{}.aisle2();
                aisleFunc{}.aisle2Func();
                break;
            case 3:
                system("cls");
                showAisles{}.aisle3();
                aisleFunc{}.aisle3Func();
                break;
            case 4:
                system("cls");
                showAisles{}.aisle4();
                aisleFunc{}.aisle4Func();
                break;
            case 5:
                system("cls");
                showAisles{}.aisle5();
                aisleFunc{}.aisle5Func();
                break;
        }
    };
};

class showMenue {
    public:
        void showMenu() {
            system("cls");
            printf("Where would you like to go?\n");
            printf("(1) Aisle1\n");
            printf("(2) Aisle2\n");
            printf("(3) Aisle3\n");
            printf("(4) Aisle4\n");
            printf("(5) Aisle5\n");
            showMenuFunc{}.menuFunc();
        };
};



int main() {
    srand(time(NULL));
    float randomFloat = cart{}.generateRandomFloat(1.0, 100.0);
    system("cls");
    printf("Welcome To Shop.");
  //classname{}.voidfunction();    // this is how to call a void function inside a class
    showMenue{}.showMenu();
};

#include <stdio.h>
#include <windows.h>

class showAisles {
    void aisle1() {};
    void aisle2() {};
    void aisle3() {};
    void aisle4() {};
    void aisle5() {};
};

class aisleFunc {
    void aisle1Func() {};
    void aisle2Func() {};
    void aisle3Func() {};
    void aisle4Func() {};
    void aisle5Func() {};
};

class showMenuFunc {
    public:
    void menuFunc() {
        int menuchoice;
        scanf("%d", &menuchoice);
        switch (menuchoice) {
            case 1:
                system("cls");
                //logic
                break;
            case 2:
                system("cls");
                //logic
                break;
            case 3:
                system("cls");
                //logic
                break;
            case 4:
                system("cls");
                //logic
                break;
            case 5:
                system("cls");
                //logic
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

    system("cls");
    printf("Welcome To Shop.");
  //classname{}.voidfunction();    // this is how to call a void function inside a class
    showMenue{}.showMenu();
};

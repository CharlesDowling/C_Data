// Data.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define MAX 10

bool login_check() {
    char username[10];
    char password[10];
    printf("Login   : ");
    scanf_s("%s", username, (unsigned)_countof(username));
    printf("Password: ");
    scanf_s("%s", password, (unsigned)_countof(password));
    printf("%s", username);
    return false;
}

void clrscr()
{
    system("@cls||clear");
}

int main()
{   
    bool exit = false;
    int option = 0;
    bool login = false;
    while (exit == false){
        printf("Welcome!\n");
        printf("----------\n");
        printf("Select an option\n");
        printf("1. Login\n");
        printf("2. Exit\n");
        scanf_s("%d", &option);
        clrscr();
        if (option == 1) {
            while (option == 1) {
                login = login_check();
                if (login == true) {
                    //
                }
                else {
                    clrscr();
                    printf("Login Failed!\n");
                    printf("Try again? :");
                    scanf_s("%d", &option);
                    option = 0;
                    clrscr();
                }
            }
        }
        else {
            clrscr();
            _Exit(0);
        }

    }

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

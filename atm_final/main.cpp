#include <iostream>

using namespace std;

char Menu(char choice, double balance, double withdraw, double deposit);
string Login (string username, string password);
string Register (string username, string password);

int main()
{
    string username, password;
    double balance, withdraw, deposit;
    int input;
    char choice;
    balance = 0;

    cout << "============================================================ \n                           ATM SYSTEM                      \n============================================================ \n" << endl;
    cout << endl;

    cout << "Welcome!" << endl;
    cout << endl;
    cout << "| Enter 1 to LOGIN    |\n| Enter 2 to REGISTER |\n" << endl;
    cin >> input;

        switch(input) {
            case 2:
                cout << endl;
                cout << "============================================================ \n   Welcome, new user! Please enter a username and password:   \n============================================================ \n" << endl;
                cout << endl;

                Register(username, password);
            break;
            case 1:
                cout << endl;
                cout << "============================================================ \n    Welcome back! Please enter your username and password:  \n============================================================ \n" << endl;
                cout << endl;

                Login(username, password);

                Menu(choice, balance, withdraw, deposit);
            break;
            default:
                cout << "Hey!! Only pick between 1 or 2 please!!! :(" << endl;
                cout << endl;
                main ();
        }
}
char Menu(char choice, double balance, double withdraw, double deposit) {
    cout << endl;
    cout << "| Enter A to WITHDRAW          |\n| Enter B to DEPOSIT           |\n| Enter C to REQUEST BALANCE   |\n| Enter D to QUIT THE PROGRAM  |\n" << endl;
    cout << "Enter choice: ";
    cin >> choice;

            while (choice!= 'd'||'D') {
                switch(choice) {
                    case 'A':
                    case 'a':
                        cout << endl;
                        cout << "============================================================ \n                           WITHDRAWAL                         \n============================================================ \n" << endl;
                        cout << endl;

                        cout << "How much would you like to withdraw?" << endl;
                        cin >> withdraw;
                        balance = balance - withdraw;
                        cout << endl;

                        if (withdraw <= 1) {
                            cout << "You have withdrawn an amount of " << withdraw << " meep." << endl;
                        }
                        else if (withdraw > 1) {
                            cout << "You have withdrawn an amount of " << withdraw << " meeps in your account." << endl;
                        }
                        cout << endl;
                        if (balance <= 1) {
                            cout << "You now have " << balance << " meep in your account." << endl;
                        }
                        else if (withdraw > 1) {
                            cout << "You now have " << balance << " meeps in your account." << endl;
                        }
                    break;
                    case 'B':
                    case 'b':
                        cout << endl;
                        cout << "============================================================ \n                            DEPOSIT                           \n============================================================ \n" << endl;
                        cout << endl;

                        cout << "How much would you like to deposit?" << endl;
                        cin >> deposit;
                        balance = balance + deposit;
                        cout << endl;

                        if (deposit <= 1) {
                            cout << "You have deposited an amount of " << deposit << " meep to your account." << endl;
                        }
                        else if (deposit > 1) {
                            cout << "You have deposited an amount of " << deposit << " meeps to your account." << endl;
                        }
                        cout << endl;
                        if (balance <= 1) {
                            cout << "You now have " << balance << " meep in your account." << endl;
                        }
                        else if (deposit > 1) {
                            cout << "You now have " << balance << " meeps in your account." << endl;
                        }
                    break;
                    case 'C':
                    case 'c':
                        cout << endl;
                        cout << "============================================================ \n                            BALANCE                           \n============================================================ \n" << endl;
                        cout << endl;

                        if (balance <= 1) {
                            cout << "You currently have " << balance << " meep in your account." << endl;
                        }
                        else {
                            cout << "You currently have " << balance << " meeps in your account." << endl;
                        }
                    break;
                    case 'D':
                    case 'd':
                        cout << endl;
                        cout << "============================================================ \n        Thank you for using our ATM! Please come again!       \n============================================================ \n" << endl;
                        return 0;
                    break;
                    default:
                        cout << endl;
                        cout << "That's not in one of the options!! :( Please enter a correct input... ;-;";
                        cout << endl;
                }
                    cout << endl;
                    cout << ">> What else would you like to do? <<" << endl;
                    cout << "| Enter A to WITHDRAW          |\n| Enter B to DEPOSIT           |\n| Enter C to REQUEST BALANCE   |\n| Enter D to QUIT THE PROGRAM  |\n" << endl;
                    cout << "Enter choice: ";
                    cin >> choice;
                }
}
string Login(string username, string password) {

    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username!= "Admin") {
        cout << endl;
        cout << ">>!!!<< Oh no! Sorry, you've entered the wrong username or password! Please try again. >>!!!<<" << endl;
        cout << endl;
        main ();
    }
    else if (password!= "ADMIn123!") {
        cout << endl;
        cout << ">>!!!<< Oh no! Sorry, you've entered the wrong username or password! Please try again. >>!!!<<" << endl;
        cout << endl;
        main ();
    }
    else {
        cout << endl;
        cout << "Welcome back, " << username << "!" << " What would you like to do?" << endl;
        cout << endl;
    }
}
string Register(string username, string password) {

    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    cout << endl;
    cout << "Thank you for signing up, " << username << "!" << " You will be redirected to the menu to log in." << endl;
    cout << endl;
    main();
}

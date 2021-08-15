#include <iostream>
#include <windows.h>
#include <time.h> 
#pragma warning(disable : 4996)

using namespace std;

//src04
//Bruno S.
//2021

string pin, login, wybor;
int a, b, wynikp, wynikm, wynikd, wynikx;
void calc();
void menu();

int main()
{
    system("cls");
    cout << "Welcome to 'src'. Input PIN" << endl;
    cin >> pin;

    if (pin == "2026")
    {
        system("cls");
        cout << "PIN is correct" << endl;
        cout << "Input login:" << endl;
        cout << "admin, bruno" << endl;
        cin >> login;

        if (login == "admin")
        {
            cout << "Account in production :) " << endl;
        }

        if (login == "bruno")
        {
            system("cls");
            cout << "Login successfully" << endl;
            menu();
        }
        if ((login != "admin") && (login != "bruno"))
        {
            system("cls");
            cout << "ERROR 001";
            Sleep(3000);
        }

    }
    else
    {
        system("cls");
        cout << "Incorrect PIN. Access denied" << endl;
        Sleep(3000);
    }
}

void calc()
{
    cout << "Calculator on. Enter two digits. " << endl;
    cin >> a;
    cin >> b;
    wynikp = a + b;
    wynikm = a - b;
    wynikd = a / b;
    wynikx = a * b;
    cout << "Adding: " << wynikp << endl;
    cout << "Substraction: " << wynikm << endl;
    cout << "Division: " << wynikd << endl;
    cout << "Multiplication: " << wynikx << endl;
    menu();
}

void menu()
{
    time_t now = time(0);
    string dt = ctime(&now);
    cout << "  " << endl;
    cout << dt << endl;
    cout << "  " << endl;
    cout << "1. Calc" << endl;
    cin >> wybor;
    if (wybor == "1")
    {
        calc();
    }
}

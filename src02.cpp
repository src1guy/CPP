#include <iostream>

using namespace std;

//src02
//Bruno S.
//2021

string pin, login, wybor;
int a, b, wynikp, wynikm, wynikd, wynikx;
void calc();
void menu();


int main()
{
    cout << "Welcome to 'src01'. Input PIN" << endl;
    cin >> pin;

    if (pin == "2026")
    {
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
            cout << "Login successfully" << endl;
            menu();
        }
        if ((login != "admin") && (login != "bruno"))
        {
            cout << "ERROR 001";
        }

    }
    else
    {
        cout << "Incorrect PIN. Access denied" << endl;
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
    cout << "  " << endl;
    cout << "1. Calc" << endl;
    cin >> wybor;
    if (wybor == "1")
    {
        calc();
    }
}

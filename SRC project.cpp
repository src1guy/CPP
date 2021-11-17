
//
#include <iostream>
#include <windows.h>
#include <time.h> 
#pragma warning(disable : 4996)

using namespace std;

//src07
//Bruno S.
//2021

string pin, login, wybor;
int a, b, wynikp, wynikm, wynikd, wynikx;
float kilograms, meters, a2, b2, c2;
void calc();
void menu();

int main()
{
    system("cls");
    Beep(1000, 200), Beep(1500, 200), Beep(2000, 200), Beep(2500, 1000);
    cout << "Welcome to 'src'. Input PIN" << endl;
    cin >> pin;

    if (pin == "2026")
    {
        system("cls");
        Beep(1000, 200), Beep(1500, 200), Beep(1000, 200), Beep(2500, 1000);
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
            Beep(1000, 200), Beep(1000, 200), Beep(1500, 600), Beep(1500, 600);
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

void calc_bmi()
{
    cout << "BMI calculator on. Enter your weight (in kilograms) and height (in meters) . " << endl;
    cin >> kilograms;
    cin >> meters;
    float good_meters = meters * meters;
    float bmi = kilograms / good_meters;
    cout << "Your BMI is: " << bmi << endl;
    menu();
}

void calc_square()
{
    cout << "Enter the length of the side 'a' " << endl;
    cin >> a2;
    int P = a2 * a2;
    cout << "The area of the square is: " << P << endl;
    menu();
}

void calc_rectangle()
{
    cout << "Enter the length of the side 'a' " << endl;
    cin >> a2;
    cout << "Enter the length of the side 'b' " << endl;
    cin >> b2;
    int P = a2 * b2;
    cout << "The area of the rectangle is: " << P << endl;
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
    cout << "2. BMI calc" << endl;
    cout << "3. Square area" << endl;
    cout << "4. Rectangle area" << endl;
    cin >> wybor;
    if (wybor == "1")
    {
        calc();
    }
    if (wybor == "2")
    {
        calc_bmi();
    }
    if (wybor == "3")
    {
        calc_square();
    }
    if (wybor == "4")
    {
        calc_rectangle();
    }
    if (wybor == "EXIT")
    {
        Beep(600, 200), Beep(500, 200), Beep(600, 400), Beep(500, 400);
        return;
    }
}

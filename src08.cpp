
//
#include <iostream>
#include <windows.h>
#include <time.h> 
#pragma warning(disable : 4996)

using namespace std;

//src08
//Bruno S.
//2022

string wybor;
double a, b, wynikp, wynikm, wynikd, wynikx, a2, b2, c2, h, r;
float kilograms, meters;
double pi = 3.14159265;
double pentagon_constant = 1.72048;
void calc();
void menu();

int main()
{
    system("cls");
    Beep(550, 200), Beep(750, 200), Beep(1000, 200), Beep(1250, 1000);
    cout << "Welcome to 'src' by Bruno S." << endl;
    menu();
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
    double P = a2 * a2;
    cout << "The area of the square is: " << P << endl;
    menu();
}

void calc_rectangle()
{
    cout << "Enter the length of the side 'a' " << endl;
    cin >> a2;
    cout << "Enter the length of the side 'b' " << endl;
    cin >> b2;
    double P = a2 * b2;
    cout << "The area of the rectangle is: " << P << endl;
    menu();
}
void calc_triangle()
{
    cout << "Enter the length of the side 'a' " << endl;
    cin >> a2;
    cout << "Enter the height (h) " << endl;
    cin >> h;
    double P = a2 * h;
    double P2 = P / 2;
    cout << "The area of the triangle is: " << P2 << endl;
    menu();
}
void calc_trapezoid()
{
    cout << "Enter the length of the side 'a' " << endl;
    cin >> a2;
    cout << "Enter the length of the side 'b' " << endl;
    cin >> b2;
    cout << "Enter the height (h) " << endl;
    cin >> h;
    double P = a2 + b2;
    double P2 = P * h;
    double P3 = P2 / 2;
    cout << "The area of the trapezoid is: " << P3 << endl;
    menu();
}
void calc_circle()
{
    cout << "Enter the length of the radius (r) " << endl;
    cin >> r;
    double P = r * r;
    double P2 = P * pi;
    cout << "The area of the circle is: " << P2 << endl;
    menu();
}
void calc_pentagon()
{
    cout << "Enter the length of the side 'a' " << endl;
    cin >> a2;
    double P = a2 * a2;
    double P2 = P * pentagon_constant;
    cout << "The area of the pentagon is: " << P2 << endl;
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
    cout << "2D objects" << endl;
    cout << "3. Square area" << endl;
    cout << "4. Rectangle area" << endl;
    cout << "5. Triangle area" << endl;
    cout << "6. Trapezoid area" << endl;
    cout << "7. Circle area" << endl;
    cout << "8. Pentagon area" << endl;
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
    if (wybor == "5")
    {
        calc_triangle();
    }
    if (wybor == "6")
    {
        calc_trapezoid();
    }
    if (wybor == "7")
    {
        calc_circle();
    }
    if (wybor == "8")
    {
        calc_pentagon();
    }
    if (wybor == "EXIT")
    {
        Beep(600, 200), Beep(500, 200), Beep(600, 400), Beep(500, 400);
        return;
    }
}

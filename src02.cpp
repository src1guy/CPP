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
    cout << "Witam w 'src01'. Podaj PIN" << endl;
    cin >> pin;

    if (pin == "2026")
    {
        cout << "PIN poprawny" << endl;
        cout << "Podaj login:" << endl;
        cout << "admin, bruno" << endl;
        cin >> login;

        if (login == "admin")
        {
            cout << "Konto w produkcji :)" << endl;
        }

        if (login == "bruno")
        {
            menu();
        }
        if ((login != "admin") && (login != "bruno"))
        {
            cout << "ERROR 001: NIE ZNALEZIONO";
        }

    }
    else
    {
        cout << "PIN niepoprawny. Dostep odmowiony" << endl;
    }
}

void calc()
{
    cout << "Kalkulator wlaczony. Podaj dwie cyfry." << endl;
    cin >> a;
    cin >> b;
    wynikp = a + b;
    wynikm = a - b;
    wynikd = a / b;
    wynikx = a * b;
    cout << "Dodawanie: " << wynikp << endl;
    cout << "Odejmowanie: " << wynikm << endl;
    cout << "Dzielenie: " << wynikd << endl;
    cout << "Mnozenie: " << wynikx << endl;
    menu();
}

void menu()
{
    cout << "  " << endl;
    cout << "Udano zalogowac sie do konta." << endl;
    cout << "1. Kalkulator" << endl;
    cin >> wybor;
    if (wybor == "1")
    {
        calc();
    }
}

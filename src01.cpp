#include <iostream>
using namespace std;

//src01
//Bruno S.
//2021

string pin, login;
int a, b, wynikp, wynikm, wynikd, wynikx;

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
            cout << "Udano zalogowac sie do konta." << endl;
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
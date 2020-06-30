#include <iostream>
using namespace std;

string odwrocWyraz1(string wyraz)
{
    string odwroconyWyraz = "";
    for(int i = 1; i <= wyraz.length(); i++){
        odwroconyWyraz += wyraz[wyraz.length()-i];
    }

    return odwroconyWyraz;
}

string odwrocWyraz2(string wyraz)
{
    string odwroconyWyraz = "";
    for(int i = wyraz.length()-1; i >= 0; i--){
        odwroconyWyraz += wyraz[i];
    }

    return odwroconyWyraz;
}

string odwrocWyraz3(string wyraz)
{
    string odwroconyWyraz = "";
    for(int i = 0; i < wyraz.length(); i++){
        odwroconyWyraz = wyraz[i] + odwroconyWyraz;
    }

    return odwroconyWyraz;
}

int main()
{
    string wyraz;
    string wynik;
    cout << "Podaj wyraz ";
    cin >> wyraz;
    wynik = odwrocWyraz1(wyraz);
    cout << "Wynik pierwszej metody: " << wynik << endl;
    wynik = odwrocWyraz2(wyraz);
    cout << "Wynik drugiej metody: " << wynik << endl;
    wynik = odwrocWyraz3(wyraz);
    cout << "Wynik trzeciej metody: " << wynik << endl;
    return 0;
}

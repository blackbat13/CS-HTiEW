#include <iostream>
using namespace std;

int parzystoscSumy(int liczba1, int liczba2)
{
    int suma = liczba1 + liczba2;
    if(suma % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int liczba1, liczba2;
    int wynik;
    cout << "Podaj dwie liczby naturalne ";
    cin >> liczba1 >> liczba2;
    wynik = parzystoscSumy(liczba1,liczba2);
    cout << "Wynik parzystosci sumy: " << wynik << endl;
    return 0;
}

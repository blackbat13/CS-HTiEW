#include <iostream>
using namespace std;

int kwadratLiczby(int liczba)
{
    return liczba * liczba;
}

int main()
{
    int liczba;
    int wynik;
    cout << "Podaj liczbe naturalna ";
    cin >> liczba;
    wynik = kwadratLiczby(liczba);
    cout << "Kwadrat podanej liczby: " << wynik << endl;
    return 0;
}

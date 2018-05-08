#include <iostream>
using namespace std;

int nww(int liczba1, int liczba2)
{
    int liczba1Nww = liczba1;
    int liczba2Nww = liczba2;
    while(liczba1Nww != liczba2Nww)
    {
        if(liczba1Nww < liczba2Nww)
        {
            liczba1Nww += liczba1;
        }
        else
        {
            liczba2Nww += liczba2;
        }
    }

    return liczba1Nww;
}

int nwd(int liczba1, int liczba2)
{
    int wynikNww, wynikNwd;
    wynikNww = nww(liczba1, liczba2);
    wynikNwd = (liczba1*liczba2)/wynikNww;
    return wynikNwd;
}

int main()
{
    int liczba1, liczba2;
    int wynikNww, wynikNwd;
    cout << "Podaj dwie liczby naturalne ";
    cin >> liczba1 >> liczba2;
    wynikNww = nww(liczba1,liczba2);
    wynikNwd = nwd(liczba1,liczba2);
    cout << "NWW(" << liczba1 << "," << liczba2 << ")=" << wynikNww << endl;
    cout << "NWD(" << liczba1 << "," << liczba2 << ")=" << wynikNwd << endl;
    return 0;
}

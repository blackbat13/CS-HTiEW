#include <iostream>
using namespace std;

bool zawiera_wyraz(string tekst, string wyraz)
{
    for(int i = 0; i < tekst.length() - wyraz.length() + 1; i++)
    {
        bool ok = true;
        for(int j = 0; j < wyraz.length(); j++)
        {
            if(tekst[i + j] != wyraz[j])
            {
                ok = false;
                break;
            }
        }

        if(ok)
        {
            return true;
        }
    }

    return false;
}

string odwroc_wyraz(string wyraz) {
    string odwrocony = "";
    for(int i = 0; i < wyraz.length(); i++) {
        odwrocony = wyraz[i] + odwrocony;
    }

    return odwrocony;
}

int main()
{
    string tekst, wyraz;
    cin >> tekst >> wyraz;

    string odwrocony;
    odwrocony = odwroc_wyraz(wyraz);

    if(zawiera_wyraz(tekst, wyraz)) {
        cout << "Obraza I stopnia" << endl;
    } else if(zawiera_wyraz(tekst, odwrocony)) {
        cout << "Obraza II stopnia" << endl;
    } else {
        cout << "Brak obrazy" << endl;
    }
    
    return 0;
}
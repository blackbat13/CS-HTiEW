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

int main()
{
    return 0;
}
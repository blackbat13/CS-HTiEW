def odwróc_wyraz1(wyraz):
    odwrócony_wyraz = ""
    for i in range(0, len(wyraz)):
        odwrócony_wyraz += wyraz[len(wyraz) - i - 1]

    return odwrócony_wyraz


def odwróc_wyraz2(wyraz):
    odwrócony_wyraz = ""
    for i in range(len(wyraz)-1, -1, -1):
        odwrócony_wyraz += wyraz[i]

    return odwrócony_wyraz


def odwróc_wyraz3(wyraz):
    odwrócony_wyraz = ""
    for i in range(0, len(wyraz)):
        odwrócony_wyraz = wyraz[i] + odwrócony_wyraz

    return odwrócony_wyraz


wyraz = input("Podaj wyraz ")
wynik = odwróc_wyraz1(wyraz)
print(f"Odwrócony wyraz, pierwsza metoda: {wynik}")
wynik = odwróc_wyraz2(wyraz)
print(f"Odwrócony wyraz, pierwsza metoda: {wynik}")
wynik = odwróc_wyraz3(wyraz)
print(f"Odwrócony wyraz, pierwsza metoda: {wynik}")
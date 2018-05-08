def nww(liczba1, liczba2):
    liczba1_nww = liczba1
    liczba2_nww = liczba2
    while liczba1_nww != liczba2_nww:
        if liczba1_nww < liczba2_nww:
            liczba1_nww += liczba1
        else:
            liczba2_nww += liczba2

    return liczba1_nww


def nwd(liczba1, liczba2):
    wynik_nww = nww(liczba1, liczba2)
    wynik_nwd = (liczba1 * liczba2) / wynik_nww
    return int(wynik_nwd)


liczba1 = int(input("Podaj pierwszą liczbę "))
liczba2 = int(input("Podaj drugą liczbę "))
wynik_nww = nww(liczba1, liczba2)
wynik_nwd = nwd(liczba1, liczba2)
print(f"NWW({liczba1},{liczba2})={wynik_nww}")
print(f"NWD({liczba1},{liczba2})={wynik_nwd}")
def parzystość_sumy(liczba1, liczba2):
    suma = liczba1 + liczba2
    if suma % 2 == 0:
        return 1
    else:
        return 0


liczba1 = int(input("Podaj pierwszą liczbę "))
liczba2 = int(input("Podaj drugą liczbę "))
wynik = parzystość_sumy(liczba1, liczba2)
print(f"Wynik parzystości sumy: {wynik}")
def zawiera_wyraz(tekst, wyraz):
    for i in range(0, len(tekst) - len(wyraz) + 1):
        ok = True
        for j in range(0, len(wyraz)):
            if tekst[i+j] != wyraz[j]:
                ok = False
                break
        if ok:
            return True
    return False

def odwroc_wyraz(wyraz):
    odwrocony = ""
    for i in range(0, len(wyraz)):
        odwrocony = wyraz[i] + odwrocony
    return odwrocony


tekst = input()
wyraz = input()

odwrocony = odwroc_wyraz(wyraz)
if zawiera_wyraz(tekst, wyraz):
    print("Obraza I stopnia")
elif zawiera_wyraz(tekst, odwrocony):
    print("Obraza II stopnia")
else:
    print("Brak obrazy")
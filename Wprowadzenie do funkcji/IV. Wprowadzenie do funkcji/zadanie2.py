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
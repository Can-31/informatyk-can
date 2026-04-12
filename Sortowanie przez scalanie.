def merge_sort(tab):
    if len(tab) <= 1:
        return tab

    srodek = len(tab) // 2

    lewa = merge_sort(tab[:srodek])
    prawa = merge_sort(tab[srodek:])

    return scal(lewa, prawa)


def scal(lewa, prawa):
    wynik = []

    while lewa and prawa:
        if lewa[0] < prawa[0]:
            wynik.append(lewa.pop(0))
        else:
            wynik.append(prawa.pop(0))

    return wynik + lewa + prawa


# test
tab = [5, 2, 9, 1, 7]
print(merge_sort(tab))

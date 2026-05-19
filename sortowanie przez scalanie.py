tab = [5, 2, 9, 1, 7, 3]

while len(tab) > 1:
    srodek = len(tab) // 2

    lewa = tab[:srodek]
    prawa = tab[srodek:]

    wynik = []

    i = 0
    j = 0

    while i < len(lewa) and j < len(prawa):
        if lewa[i] < prawa[j]:
            wynik.append(lewa[i])
            i += 1
        else:
            wynik.append(prawa[j])
            j += 1

    while i < len(lewa):
        wynik.append(lewa[i])
        i += 1

    while j < len(prawa):
        wynik.append(prawa[j])
        j += 1

    tab = wynik

print(tab)

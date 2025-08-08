def tar(p, q):
    """
    Ta funkcja ustala czy istnieje liczba x spełniajaca warunek x^3+px=q.
    
    :param p: Pierwszy parametr
    :param q: Drugi parametr
    :return: Liczba x jeśli istnieje, "NIE" w przeciwnym wypadku
    """
    poczatek = 0
    koniec = int(q ** (1/3) + 1)  # Zakładamy, że x nie będzie większe niż pierwiastek sześcienny z q
    
    while poczatek <= koniec:
        srodek = (poczatek + koniec) // 2
        wartosc = srodek ** 3 + p*srodek
        
        if wartosc == q:
            return int(srodek)
        elif wartosc < q:
            poczatek = srodek + 1
        else:
            koniec = srodek - 1
            
    return "NIE"

lz = int(input())
zagadki = []
for i in range(lz):
    zagadki.append(input().split())

for zagadka in zagadki:
    p = int(zagadka[0])
    q = int(zagadka[1])
    wynik = tar(p, q)
    print(wynik)

# obramuj
def obramuj(a):
    print(f"*** {a} ***")


# print("Wpisz dwie cyfry:")
# x = input("pierwsza: ")
# y = input("druga: ")

# obramuj(x)
# obramuj(y)
# obramuj(x+y)


# szescian
def szescian(krawedz):
    return krawedz**3

# x = float(input("Podaj długość krawędzi sześcianu: "))
# print(szescian(x))

# dwa parametry
def min(a, b):
    if a < b:
        return a
    else:
        return b

# w = input()
# x = int(w.split()[0])
# y = int(w.split()[1])
# z = int(w.split()[2])
# print(min(x + y, y * z))

# zliczanie cyfr
def liczba_cyfr(n):
    if n == 0:
        return 1
    wyn = 0
    while n > 0:
        wyn += 1
        n //= 10  # dzielenie całkowite
    return wyn

# n = int(input("Podaj liczbę całkowitą: "))
# print(f"Liczba cyfr w liczbie {n} wynosi: {liczba_cyfr(n)}")

# import random

# # losowanie liczby
# print(random.randint(1, 5))

# print(random.sample(range(1, 49), 6))

import os

print(os.getcwd())  # Pobiera bieżący katalog roboczy

s = {1, 2, 3, 2, 3, 4}
print(s)  # Zbiór automatycznie usuwa duplikaty


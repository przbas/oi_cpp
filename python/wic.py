ld = int(input())
pt = input()

punkty = []
for i in range(ld):
    punkty.append(int(pt.split()[i]))

punkty.sort(reverse=True)
print(punkty[1])

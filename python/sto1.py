l = int(input())
notowania = input().split()
lr = 1
rosnace = 1
i= 1

while i < l:
    if int(notowania[i]) > int(notowania[i - 1]):
        rosnace += 1
    else:
        rosnace = 1
    if rosnace > lr:
        lr = rosnace
    i += 1

print(lr)

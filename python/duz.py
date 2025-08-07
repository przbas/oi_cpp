w = input()

l1 = w.split()[0]
warunek = w.split()[1]
l2 = w.split()[2]

if warunek == "==":
    if l1 == l2:
        print("TAK")
    else:
        print("NIE")

if warunek == "!=":
    if l1 != l2:
        print("TAK")
    else:
        print("NIE")

if warunek == "<" or warunek == ">=":
    if len(l1) < len(l2):
        print("TAK" if warunek == "<" else "NIE")
    elif len(l1) == len(l2):
        no_break = True
        for i in range(len(l1)):
            if l1[i] < l2[i]:
                print("TAK" if warunek == "<" else "NIE")
                no_break = False
                break
            elif l1[i] == l2[i]:
                continue
            else:
                print("NIE" if warunek == "<" else "TAK")
                no_break = False
                break
        if no_break:
            print("NIE" if warunek == "<" else "TAK")
    else:
        print("NIE" if warunek == "<" else "TAK")

if warunek == ">" or warunek == "<=":
    if len(l1) > len(l2):
        print("TAK" if warunek == ">" else "NIE")
    elif len(l1) == len(l2):
        no_break = True
        for i in range(len(l1)):
            if l1[i] > l2[i]:
                print("TAK" if warunek == ">" else "NIE")
                no_break = False
                break
            elif l1[i] == l2[i]:
                continue
            else:
                print("NIE" if warunek == ">" else "TAK")
                no_break = False
                break
        if no_break:
            print("NIE" if warunek == ">" else "TAK")
    else:
        print("NIE" if warunek == ">" else "TAK")

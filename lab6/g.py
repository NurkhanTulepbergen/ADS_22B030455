n = int(input())
nicknames = {}
for _ in range(n):
    old, new = input().split()
    if old in nicknames:
        nicknames[new] = nicknames[old]
        del nicknames[old]
    else:
        nicknames[new] = old

print(len(nicknames))
for new, old in sorted(nicknames.items(), key=lambda x: x[1]):
    print(old, new)

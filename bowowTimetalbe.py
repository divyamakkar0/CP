s = int(input())

base2 = int(f"{s}", base=2)

base10= int(f"{base2}", base=10)

# print(base10)

count = 0

for i in range (0, 100):
    # print(4**i)
    if (4**i) < base10:
        count+=1
    else:
        break

print(count)
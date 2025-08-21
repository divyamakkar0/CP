
t = int(input())

for i in range(t):
    k = int(input())
    ans = ""
    i = 0
    count = 1
    while(i < k):
       digs = str(count)
       ans += digs
       i += len(digs)
       count += 1
    
    ans = ans[:k]
    sum = 0
    for digit in ans:
        sum += int(digit)

    print(sum)
    
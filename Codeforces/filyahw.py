n = int(input())
nums = list(map(int, input().split()))
lookup = {}

for num in nums:
    if num not in lookup:
        lookup[num] = 1
        
if len(lookup) < 3:
    print("YES")
elif len(lookup) > 3:
    print("NO")
else:
    k = sorted(lookup.keys())
    if abs(k[2] - k[1]) == abs(k[1] - k[0]):
        print("YES")
    else:
        print("NO")


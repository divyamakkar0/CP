s = input()
sub_str = "bear"
total_comb = 0
total = len(s)

while True:
    res = s.find(sub_str)
    if res == -1:
        break
    
    front_ind = res + 1
    back_ind = total - (res + 3)
    total_comb += (front_ind * back_ind)
    
    s = s[res+1 :]
    total = len(s)

print(total_comb)
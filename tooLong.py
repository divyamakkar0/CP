n = int(input())  

for w in range(n):
    word = input() 
    
    if len(word) > 10:
        abbreviation = word[0] + str(len(word) - 2) + word[-1]
        print(abbreviation)
    else:
        print(word)  
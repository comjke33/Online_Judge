sum = 0
str = ""

for i in range(8):
    str = input()
    for j in range(8):
        if (i+j) %2 == 0 and str[j] == 'F':
            sum += 1

print(sum)
a = 7
b = 14

print(not (a == 0))  # true

print(not (a == 7))  # false

print(not (b >= 14))  # false

print(not (b <= 7))  # true

# mencakup kedua kondisi
print(not ((a == 0) or (a > b)))  # true

print((a == 15) and not (a > b))  # false

print((a >= 7) or not (a > b))  # true

# mencakup kondisi pertama doang
print(not (a <= 7) and (a <= b))  # true

num1 = int(input("Enter num1 : "))
num2 = int(input("Enter num2 : "))
copy1 = num1
copy2 = num2

print("\n<------ Arithmetic operator ------>")
print("num1 + num2 is :", num1 + num2)
print("num1 - num2 is:", num1 - num2)
print("num1 * num2 is :", num1 * num2)
print("num1 / num2 is :", num1 / num2)
print("num1 % num2 is:", num1 % num2)
print("num1++ is :", num1 + 1)
print("num2-- is :", num2 - 1)

print("\n<------ Relational operator ------>")
print("num1 < num2 is :", num1 < num2)
print("num1 <= num2 is:", num1 <= num2)
print("num1 > num2 is :", num1 > num2)
print("num1 >= num2 is :", num1 >= num2)
print("num1 == num2 is:", num1 == num2)
print("num1 != num2 is:", num1 != num2)

print("\n<------ Logical operator ------>")
print("num1 && num2 is :", bool(num1 and num2))
print("num1 || num2 is:", bool(num1 or num2))
print("!num1 is :", not num1)

print("\n<------ Assignment operator ------>")
x = copy1
x += copy2
print("x+=num2 :", x)
x = copy1
x -= copy2
print("x-=num2 :", x)
x = copy1
x *= copy2
print("x*=num2 :", x)
x = copy1
x /= copy2
print("x/=num2 :", x)
x = copy1
x %= copy2
print("x%=num2 :", x)

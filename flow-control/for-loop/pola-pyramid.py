row = int(input("Enter the number for rows: "))

for r in range(1, row +1):
  for space in range(1, row - r +1):
    print("  ", end="")

  for c in range(1, 2 * r):
    print("* ", end="")

  print()
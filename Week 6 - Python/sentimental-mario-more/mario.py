def get_height():
    while True:
        try:
            height = int(input("Enter the height of pyramid: "))
            if height < 1 or height > 8:
                raise ValueError
            return height
        except ValueError:
            print("Invalid input. Please enter a number between 1 and 8.")


height = get_height()

for i in range(height):
    for k in range(height - i - 1):
        print(" ", end="")
    for j in range(i + 1):
        print("#", end="")
    print("  ", end="")
    for a in range(i + 1):
        print("#", end="")
    print()

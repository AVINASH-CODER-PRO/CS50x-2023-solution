# TODO
def main():
    card_number = input("Enter Your Credit Card No: \n")
    length = len(card_number)

    number = 0
    for i in range(length - 2, -1, -2):
        digit = int(card_number[i]) * 2
        if digit >= 10:
            digit = digit // 10 + digit % 10
        number += digit

    number2 = 0
    for j in range(length - 1, -1, -2):
        number2 += int(card_number[j])

    final = number + number2
    if final % 10 == 0:
        if (
            length == 15
            and (card_number[1] == "4" or card_number[1] == "7")
            and int(card_number[0]) == 3
        ):
            print("AMEX")
        elif (
            length == 16 and ("1" <= card_number[1] <= "5") and int(card_number[0]) == 5
        ):
            print("MASTERCARD")
        elif (length == 13 or length == 16) and int(card_number[0]) == 4:
            print("VISA")
        else:
            print("INVALID")
    else:
        print("INVALID")


if __name__ == "__main__":
    main()

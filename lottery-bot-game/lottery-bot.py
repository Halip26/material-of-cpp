import random
import time

while True:
    # generate lottery number
    lottery = random.randint(0, 99)
    # input for user to put the number
    time.sleep(0.5)
    guess = eval(input("Enter ur lottery number (1-99): "))

    # take number from lottery variable
    lotteryDigit1 = lottery // 10  # floor division
    lotteryDigit2 = lottery % 10  # modulo expression

    # take the number from the guesser
    guessDigit1 = guess // 10
    guessDigit2 = guess % 10

    # if for exit the program
    if guess == 0:
        print("You exited the lottery game, bye!")
        break

    time.sleep(0.5)
    print("The lottery number is ", lottery)

    # Conditional for the game's logic
    if guess == lottery:
        time.sleep(0.5)
        print("Exact match : you win Rp1.000.000,00")
    elif (guessDigit2 == lotteryDigit1 and guessDigit1 == lotteryDigit2):
        time.sleep(0.5)
        print("Match alll  digits : You win Rp300.000,00")
    elif (guessDigit1 == lotteryDigit1
          or guessDigit1 == lotteryDigit2
          or guessDigit2 == lotteryDigit1
          or guessDigit2 == lotteryDigit2):
        time.sleep(0.5)
        print("Match one digit : You win Rp100.000,00")
    else:
        time.sleep(0.5)
        print("Sorry, no match!")

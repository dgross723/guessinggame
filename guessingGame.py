import random

num = random.randrange(1,20)
print(num)

guess = int(input("Guess a number that is between 1 and 20 "))

while guess != num:

    if guess > num:

       guess =  (int(input("YOU'RE WRONG, TOO HIGH, guess again ")))
    
    elif guess < num:

        guess = (int(input("YOU'RE WRONG, TOO LOW, guess again ")))

print("You're right, good job I guess")
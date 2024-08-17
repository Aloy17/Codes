import random
import time

ansr = ['r', 'p', 's']
win = {
    'r': 's',
    'p': 'r',
    's': 'p'
}

print("Hello, this is a simple rock paper scissors game")
time.sleep(3)
print("All you have to do is enter 'r' for rock 'p' for paper 's' for scissors")
time.sleep(2)
print("Ready?")


while True:
    print("Rock")
    time.sleep(1)
    print("Paper")
    time.sleep(1)
    print("Scissors")
    time.sleep(1)
    n = input("Shoot:")


    comp = random.choice(ansr)
    if n == comp:
        print("Draw")
    elif win[n]==comp:
        print("You win")
    else:
        print("You lost")

    new = input("Try again?:")
    if new.lower() == "no":
        break

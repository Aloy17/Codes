import time
import random
print("Hello, this is a simple guessing game, I'm going to guess a number between 1-10")
time.sleep(1)
print("You have to guess the number")

high = 10
low = 1
mid = 5 
ansr = random.randint(1,10)
while True:
    n = int(input("Ok now guess the number:"))
    if n == ansr:
        print("CONGRATULATIONS YOU GUESSED IT RIGHT!")
        break
    elif n < mid:
        print("You're close")
        high = mid-1
    elif n > mid:
        print("Too far")
        low = mid+1
    

        
        
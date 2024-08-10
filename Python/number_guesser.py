import time
import random
print("Hello, this is a small program that'll try to guess your number")
time.sleep(2)
print("Please enter a range (Between which 2 numebrs will your original number be)")
m = int(input("Range1:"))
n = int(input("Range2:"))

nom = int(input("Great now enter your number (don't worry I won't peak :-)"))

while True:
    print("I'll now try to guess your number")
    time.sleep(1)
    print(".")
    time.sleep(1)
    print(".")
    time.sleep(1)
    print(".")
    num = random.randint(m,n)
    print(f"Is THIS you number? {num} (yes or no)")
    ansr = input()
    if ansr.lower()=="yes":
        print("Fantastic")
        break
    
    else:
        print("Awwwww i'll try again!")
        
        
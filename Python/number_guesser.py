import time
import random
while True:
 print("GREETINGS! I challenge you to pick a number and I shall guess it\n")
 m=int(input("Enter the first number: "))
 n=int(input("Enter the second number: "))
 
 x=int(input("Now for the greatest part! enter your number and I shall guess it (don't worry I can't read the number)\n"))
 
 print(f"Now I shall guess the number which is between {m} and {n} \n")
 time.sleep(1)
 print(".")
 time.sleep(1)
 print(".")
 time.sleep(1)
 print(".")
 time.sleep(1)
 print(".")
 time.sleep(1)
 print(".")
 
 print("Is THIS your number? ",random.randrange(m,n+1))
 ansr=input().lower()
 
 if ansr=="yes":
     print("I knew it, I'm the best!")
     break
 else:
     ansr1=input("Awwwwww, can I try again? from the start?: ").lower()
     if ansr1!="yes":
         break
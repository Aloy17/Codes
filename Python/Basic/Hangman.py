import words
import time
import random

print("This is the hangman game, your partner has made 4 words, you'll have to guess one of them")
time.sleep(3)
print("Hint: Fruits")
time.sleep(1)
print("You'll have 6 attempts (lives) to guess before you lose")

def game():
    ansr = random.choice(words.fruits)
    correct_letters = set()
    used_letters = set()
    lives = 6
    ansr_letters = list(ansr)
    
    while lives > 0:
        output = ''.join([letter if letter in correct_letters else "_" for letter in ansr_letters])
        print(f"Your word is {output}")
        
        if output==ansr:
            print("CONGRATULATIONS!!! you've guessed the word!")
            break
        
        n = input("Guess a letter:")
        
        if n in used_letters:
            print("You've already guessed this letter")
            continue
        
        used_letters.add(n)
        
        
        if n.lower() in ansr_letters:
            print("Good guess")
            correct_letters.add(n)
            
        else:
            lives -=1
            print(f"Wrong guess you have {lives} lives left")
        
        if lives == 0:
            print("You've run out of lives :(")
            
game()
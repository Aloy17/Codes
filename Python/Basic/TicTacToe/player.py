import math
import random
import tic_tac_toe

class Player:
    def __init__(self,letter):
        self.letter = letter
        
    def get_move(self,game):
        pass
    
    
class Computer(Player):
    def __init__(self, letter):
        super().__init__(letter)
        
    def get_move(self,game):
        square = random.choice(tic_tac_toe.availabe_moves())
    
class Human(Player):
    def __init__(self, letter):
        super().__init__(letter)
    
    
    def get_move(self,game):
        valid_square = False
        val = None
        
        while not valid_square:
            square = input(self.letter  + '\'s turn. Input move (0-9):')
            
            try:
                val = int(square)
                if val not in tic_tac_toe.available_moves():
                    raise ValueError
                valid_square = True
            except ValueError:
                print("Invalid square, try again")
        
        return val            
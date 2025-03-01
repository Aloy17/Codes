class TicTacToe:
    def __init__(self):
        self.board = [' ' for _ in range(9) ]
        self.winner = None
        
    def print_board(self):
        for row in [self.board[i*3:(i+1)*3] for i in range(3)]:
            print('| '+' |'.join(row)+' |')
            
    @staticmethod
    def print_board_number():
        number_board=[[str(i) for i in range(j*3, (j+1)*3)] for j in range(3)]
        for row in number_board:
            print('| '+' |'.join(row)+' |')

    def availabe_moves(self):
       return [i for i,x in enumerate(self.board) if x == ' ']   
   
    def check_squares(self):
        return ' '  in self.board
    
    def num_empty_squares(self):
        return self.board.count(' ')     
   
def play(game, x_player, o_player, print_game = True):
    if print_game:
        TicTacToe.print_board_number()
        
    letter = 'X'
              
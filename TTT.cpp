//Tic-tac-toe game
// use coordinates such as a1, b2, c3 to make moves on the labeled board
// to quit playing enter q



#include <iostream>


using namespace std;


void drawBoard( char oboard[3][3])
{
  cout << "\n  1 2 3\n";
  for (int i = 0; i < 3; i++){
    cout << char('a' + i) << " "; //row label
    for (int j = 0; j < 3; j++){
      cout << oboard[i][j] << " ";
    }
    cout << "\n";

  }
}



int main()
{
  int xWins = 0, oWins = 0;
  char move[10]; 

  while (true){ //fresh board
    char oboard[3][3] = {{' ',' ',' '},
			 {' ',' ',' '},
			 {' ',' ',' '}};
    char player = 'X';
    int moves = 0;
  bool win = false;

  while (!win && moves < 9){
    drawBoard(oboard);
    cout << player << "enter your move: ";
    cin >> move;
    if (!cin || move[0] == 'q'){//quit
      cout << "Final score   X: " << xWins << "  O: " << oWins << "\n";
      return 0;
    }

    int row = move[0] - 'a';//inpit -> arrau
    int col = move[1] - '1';
    if (row < 0 || row > 2 || col < 0 || col > 2 || oboard[row][col] != ' '){
      cout << "Illegal move try again\n";
      continue;

    }
    oboard[row][col] = player;
    moves++;

    
    //horizontal
  for (int i = 0; i < 3; i++){
    if (oboard[i][0] == oboard[i][1] && oboard[i][1] == oboard[i][2] && oboard[i][0] == player){
      win = true;
    }
  }
   
  //vertical
  for (int k = 0; k < 3; k++){
    if (oboard[0][k] == oboard[1][k] && oboard[1][k] == oboard[2][k] && oboard[0][k] == player){

      win = true;
    }
  }
  
  
  //diagonals  
    if (oboard[0][0] == oboard[1][1] && oboard[1][1] == oboard[2][2] && oboard[0][0] == player){

      win = true;
    }

    if (oboard[0][2] == oboard[1][1] && oboard[1][1] == oboard[2][0] && oboard[0][2] == player){

      win = true;
    }

  
      if (!win){
        if (player == 'X') player = 'O';
        else player = 'X';
      }
    }



  if (win){
    cout << player << " win!";
    if (player == 'X') xWins++;
    else oWins++;
  } else {
    cout << "Tie";
       
      }
  cout << "Score X: " << xWins << "  O: " << oWins << "\n";

  }

  return 0;
}

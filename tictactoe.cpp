#include "check_rules.hpp"

using namespace std;


int main() {
  // hier entsteht das Spiel TicTacToe
  std::cout << "Willkommen zu TicTacToe!\n";

  //Declare variables
  int rounds = 0;
  char player = 'X';

  // Declare Board
  vector<string> board = {
    "123",
    "456",
    "789"
  };

  // Print Board
  print_board(board);

  while (true) {

    rounds++;
    insert_move(board, player);
    //switch player
    if(player == 'X') {
      player = 'O';
    }
    else {
      player = 'X';
    }

    print_board(board);

    /*
    * check end of game
    * Eine andere Möglichkeit wäre es in der while loop zu checken
    * anstatt nur true dort stehen zu haben.
    * */
    if(game_over(rounds, board)){
      break;
    }
  }

  return 0;
}
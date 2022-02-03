#include "check_rules.hpp"

int get_number(char player) {
  int field;
  while (true) {
    cout << "Spieler " << player << ", bitte Spielfeld auswaehlen: ";
    cin >> field;
    if (field < 1 || field > 9) {
      field = 0;
      cout << "Bitte eine Zahl zwischen 1 und 9 eingeben!\n";
    }
    else {
      break;
    }
  }
  return field;
}

bool check_row(vector<string> &feld) {
  for(auto row: feld) {
    char temp_player = row[0];
    int match = 0;
    for(auto field: row) {
      if (field == temp_player) {
        match++;
      }
    }
    if (match == row.size()) {
      print_winner(temp_player);
      return true;
    }
  }
  return false;
}

bool check_col(vector<string> &feld) {
  for(int col=0; col < feld[0].size(); col++) {
    char temp_player = feld[0][col];
    int match = 0;
    for(int row=0; row < feld.size(); row++) {
      if (feld[row][col] == temp_player) {
        match++;
      }
    }
    if (match == feld[0].size()) {
      print_winner(temp_player);
      return true;
    }
  }
  return false;
}

bool game_over(int rounds, vector<string> &feld) {
  //Hat ein Spieler gewonnen?
  //Checken den unterschiedlichen Kombination auf dem feld
  if((feld[0][0] == feld[1][1] && feld[2][2] == feld[1][1]) ||
     ((feld[0][2] == feld[1][1] && feld[2][0] == feld[1][1]))
  ) {
    print_winner(feld[1][1]);
    return true;
  }
  if (check_row(feld) || check_col(feld)) {
    return true;
  }

  //Anzahl der gespielten runden checken
  if(rounds <9) {
    return false;
  }
  else {
    cout << "Maximale Anzahl an Zuegen erreicht\n";
    return true;
  }
}

void insert_move(vector<string> &feld, char player) {
  /*
  * Idealerweise sollte man vor dem Eintragen ins Board noch ein paar Parameter checken.
  * z.B. darf es sich nur um eine Zahl zwischen 1-9 handeln,
  * was passiert wenn das Feld bereits belegt ist?
  * */
  while(true) {
    int field = get_number(player);
    // insert symbol
    field--;
    int row = field/3;
    int column = field%3;

    //check if field already used
    if (feld[row][column] == 'X' || feld[row][column] == 'O') {
      cout << "Feld ist bereits besetzt, bitte ein anderes wählen\n";
    }
    //insert move
    else {
      feld[row][column] = player;
      break;
    }
  }
}

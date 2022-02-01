// #include <iostream>
// #include <vector>
// #include <string>
#include "print.hpp"

// Funktionsprotoypen
/*
* Felder prüfen und bei Bedarf Gewinner ausgaben
*/
bool gameover();
void insert_move();

int main(int argc, char const *argv[])
{
   // Datentypen
   // 2d Array/Vector
   std::vector<std::string> feld = {
      "123",
      "345",
      "789"
   };

   // Spieler
   char player = 'X'; // 'X' bzw. 'O'

   do {
      std::cout << " Spieler " << player << " ist am Zug\n";
      // Feld ausgaben
      print_board(feld);
      // Eingabe vom Spieler
      // insert_move();
      // Spieler wechseln
   }
   while (!gameover());

   return 0;
}


bool gameover() {
   return true;
}

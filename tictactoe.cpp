#include <iostream>
#include <vector>
#include <string>

// Funktionsprotoypen
bool gameover();
// Eventuell Funktion um Reihen und Spalten zu checken
void print_board(const std::vector<std::string> &feld);

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

   std::cout << "feld[0][0]-" << feld[0][0] << "-" << std::endl;
   std::cout << "feld[2][2]:-" << feld[2][2] << "-" << std::endl;
   std::string str = "   ";
   for (size_t i = 0; i < str.size(); i++)
   {
      std::cout << "-" << str[i] << "-" << std::endl;
   }


   // Spieler
   char player; // 'X' bzw. 'O'

   while (!gameover())
   {
      std::cout << " Spieler " << player << " ist am Zug\n";
      // Feld ausgaben
      // Eingabe vom Spieler
      // Spieler wechseln
   }

   return 0;
}

/*
* Felder prüfen und bei Bedarf Gewinner ausgaben
*/
bool gameover() {
   return true;
}
// Eventuell Funktion um Reihen und Spalten zu checken
void print_board(const std::vector<std::string> &feld) {

}
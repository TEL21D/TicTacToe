#include "print.hpp"

// Eventuell Funktion um Reihen und Spalten zu checken
void print_board(const std::vector<std::string> &feld)
{
   std::cout << "\n----------\n";
   for (int i = 0; i < feld.size(); i++)
   {
      std::cout << feld[i][0] << " | " << feld[i][1] << " | " << feld[i][2] << "\n----------\n";
   }
}

void print_winner(char player)
{
   std::cout << "Spieler " << player << " hat das Spiel gewonnen!\n";
}
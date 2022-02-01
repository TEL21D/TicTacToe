#include "print.hpp"


// Eventuell Funktion um Reihen und Spalten zu checken
void print_board(const std::vector<std::string> &feld) {
   // std::cout << "feld[0][0]-" << feld[0][0] << "-" << std::endl;
   // std::cout << "feld[2][2]:-" << feld[2][2] << "-" << std::endl;
   // for (size_t i = 0; i < feld.size(); i++)
   std::cout << "------------\n";
   for (std::string zeile: feld)
   {
      std::cout << "-" << zeile[0] << " | " << zeile[1]
      << " | " << zeile[2] << "-" << std::endl;
      std::cout << "------------\n";
   }
}
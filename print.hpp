// include lock am Anfang der Header Datei
#ifndef PRINT_HPP
#define PRINT_HPP

#include <iostream>
#include <string>
#include <vector>

// Eventuell Funktion um Reihen und Spalten zu checken
void print_board(const std::vector<std::string> &feld);
void print_winner(char player);

#endif /* PRINT_HPP */
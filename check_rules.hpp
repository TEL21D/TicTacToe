// include lock am Anfang der Header Datei
#ifndef CHECK_RULES_HPP
#define CHECK_RULES_HPP

#include "print.hpp"
using namespace std;

int get_number(char player);
bool check_row(vector<string> &feld);
bool check_col(vector<string> &feld);
bool game_over(int rounds, vector<string> &feld);
void insert_move(vector<string> &feld, char player);

#endif // CHECK_RULES_HPP
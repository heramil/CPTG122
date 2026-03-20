#include <iostream>
using namespace std;

#include "Sudoku.h"

int main() {
    Sudoku s;

    s.CreatePuzzle();
    s.PrintBoard();
    s.SolvePuzzle();

    return 0;
}

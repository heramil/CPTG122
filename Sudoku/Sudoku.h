#ifndef __SUDOKU__
#define __SUDOKU__

#include <iostream>
using namespace std;

class Sudoku {
private:
    struct Board_Cell {
        int solution;
        bool possible_solutions[10];
    };

    Board_Cell board[9][9];

    struct Coordinate {
        int row, column;
    };

    Coordinate CellsInRow[8];
    Coordinate CellsInColumn[8];
    Coordinate CellsInQuadrant[8];

    bool NoSolution(Coordinate cell);
    void GetRowCells(Coordinate cell);
    void GetColumnCells(Coordinate cell);
    void GetQuadrantCells(Coordinate cell);

    bool SearchInSolution(int number);
    void FindPossibleSolutions(Coordinate cell);
    void FindAllPossibleSolutions();
    void FindAllNakedSingles();

    void FindAllHiddenSingles();

public:
    Sudoku();
    void CreatePuzzle();
    void PrintBoard();
    void SolvePuzzle();
};

#endif

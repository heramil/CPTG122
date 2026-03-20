#include "Sudoku.h"

// Constructor: Initializes the 9x9 board members.
Sudoku::Sudoku() {
    // Note: This part is provided to ensure students start with a clean board
    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            board[r][c].solution = 0;
            for (int i = 0; i < 10; i++) {
                board[r][c].possible_solutions[i] = false;
            }
        }
    }
}

// TODO: Load the puzzle data into the board array.
void Sudoku::CreatePuzzle() {
    /* HINT:
        1. Define the 9x9 integer array for the puzzle.
        2. Use nested loops to transfer the numbers into 'board[r][c].solution'.
    */
    int puzzle[9][9] = {
        {0,0,0,2,6,0,7,0,1},
        {6,8,0,0,7,0,0,9,0},
        {1,9,0,0,0,4,5,0,0},
        {8,2,0,1,0,0,0,4,0},
        {0,0,4,6,0,2,9,0,0},
        {0,5,0,0,0,3,0,2,8},
        {0,0,9,3,0,0,0,7,4},
        {0,4,0,0,5,0,0,3,6},
        {7,0,3,0,1,8,0,0,0}
    };
    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            board[r][c].solution = 0;
        }
    }
}

// TODO: Display the Sudoku board on the console.
void Sudoku::PrintBoard() {
    /* HINT:
        1. Use nested loops to visit every cell.
        2. Use 'cout' to print the 'solution'.
        3. Optional: Add spaces or '|' lines to make it look like a real grid.
    */
    cout << "+-------+-------+-------+" << endl;
    for (int r = 0; r < 9; r++) {
        cout << "| ";
        for (int c = 0; c < 9; c++) {
            if (board[r][c].solution == 0) {
                cout << ". ";
            } else {
                cout << board[r][c].solution << " ";
            }
            if (c == 2 || c == 5) {
                cout << "| ";
            }
            cout << "|" << endl;
            if (r == 2 || r == 5 || r == 8) {
                cout << "+-------+-------+-------+" << endl;
            }
        }
    }
    cout << endl;
}

void Sudoku::NoSolution(Coordinate cell) {
    /* HINT: Return true if 'solution' at this coordinate is 0, false otherwise.*/
    return board[cell.row][cell.column].solution == 0;
}

// ----- Coordinate Helpers -----

// TODO: Identify the coordinates of the other 8 cells in the same row.auto

void Sudoku::GetRowCells(Coordinate cell) {
    /* HINT:
        Keep the row constant, iterate through all 9 columns. Store only the coordinates
        that ARE NOT the 'cell' itself into CellsInRow[].
    */
    int index = 0;
    for (int c = 0; c < 9; c++) {
        if (c != cell.column) {
            CellsInRow[index].row = cell.row;
            CellsInRow[index].column = c;
            index++;
        }
    }
}

// TODO: Identify the coordinates of the other 8 cells in the same column.

void Sudoku::GetColumnCells(Coordinate cell) {
    /* HINT:
        Keep the column constant, iterate through all 9 rows. Store only the coordinates
        that ARE NOT the 'cell' itself into CellsInColumn[].
    */
    int index = 0;
    for (int r = 0; r < 9; r++) {
        if (r != cell.row) {
            CellsInColumn[index].row = r;
            CellsInColumn[index].column = cell.column;
            index++;
        }
    }
}

// TODO: Identify the coordinates of the other 8 cells in the same 3x3 quadrant.
void Sudoku::GetQuadrantCells(Coordinate cell) {
    /* HINT:
        1. Find the top-left corner of the current 3x3 box.
            (Formula: (r / 3) * 3 and (c / 3) * 3.
        2. Use a nested 3x3 loop to find all cells in that box.
        3. Store coordinates in CellsInQuadrant[], skipping the current 'cell'.
    */
    int startRow = (cell.row / 3) * 3;
    int startCol = (cell.column / 3) * 3;
    int index = 0;
    for (int r = startRow; r < startRow + 3; r++) {
        for (int c = startCol; c < startCol + 3; c++) {
            if (r != cell.row || c != cell.column) {
                CellsInQuadrant[index].row = r;
                CellsInQuadrant[index].column = c;
                index++;
            }
        }
    }
}

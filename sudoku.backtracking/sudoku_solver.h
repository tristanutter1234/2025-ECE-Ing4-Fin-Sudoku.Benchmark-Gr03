#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

#include <stdbool.h>

#define SIZE 9

// Fonction pour résoudre le Sudoku
bool solveSudoku(int grid[SIZE][SIZE]);

// Vérifie si un nombre peut être placé à une position donnée
bool isValid(int grid[SIZE][SIZE], int row, int col, int num);

// Affiche la grille de Sudoku
void printGrid(int grid[SIZE][SIZE]);

#endif // SUDOKU_SOLVER_H

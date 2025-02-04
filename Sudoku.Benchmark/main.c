#include "sudoku_solver.h"
#include <stdio.h>

int main() {
    int grid[SIZE][SIZE] = {
            {0, 0, 0, 0, 8, 0, 0, 7, 0},
            {0, 9, 0, 2, 0, 0, 1, 3, 0},
            {0, 0, 2, 0, 1, 3, 9, 4, 5},
            {0, 0, 9, 0, 0, 2, 7, 0, 0},
            {0, 8, 0, 7, 0, 0, 6, 9, 0},
            {0, 0, 5, 0, 0, 0, 0, 0, 0},
            {3, 0, 7, 0, 0, 0, 0, 2, 9},
            {0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 8, 4, 2, 0, 0, 0, 0}
    };

    printf("Grille initiale :\n");
    printGrid(grid);

    if (solveSudoku(grid)) {
        printf("\nSudoku resolu :\n");
        printGrid(grid);
    } else {
        printf("\nAucune solution trouvee.\n");
    }

    return 0;
}

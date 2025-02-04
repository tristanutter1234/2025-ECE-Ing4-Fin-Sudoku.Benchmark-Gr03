#include "sudoku_solver.h"
#include <stdio.h>
#include <time.h>  // Pour mesurer le temps d'exécution

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

    // Démarrer le chronomètre
    clock_t start = clock();

    if (solveSudoku(grid)) {
        // Arrêter le chronomètre
        clock_t end = clock();

        printf("\nSudoku resolu :\n");
        printGrid(grid);

        // Calculer et afficher le temps d'exécution
        double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
        printf("\nTemps d'execution : %.6f secondes\n", time_spent);
    } else {
        printf("\nAucune solution trouvee.\n");
    }

    return 0;
}

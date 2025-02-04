using Sudoku.Shared;

namespace Sudoku.Backtracking
{
public class BacktrackingSolver : ISudokuSolver
{
public int[,] Solve(int[,] grid)
{
if (SolveSudoku(grid))
return grid;
return null;
}

private bool SolveSudoku(int[,] grid)
{
for (int row = 0; row < 9; row++)
{
for (int col = 0; col < 9; col++)
{
if (grid[row, col] == 0)
{
for (int num = 1; num <= 9; num++)
{
if (IsValid(grid, row, col, num))
{
grid[row, col] = num;
if (SolveSudoku(grid))
return true;
grid[row, col] = 0;
}
}
return false;
}
}
}
return true;
}

private bool IsValid(int[,] grid, int row, int col, int num)
{
for (int x = 0; x < 9; x++)
{
if (grid[row, x] == num || grid[x, col] == num)
return false;
}

int startRow = row / 3 * 3;
int startCol = col / 3 * 3;
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
if (grid[startRow + i, startCol + j] == num)
return false;
}
}
return true;
       }
    }
}
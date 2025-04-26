#include "largest_grid_product.h"

long long right(int** grid, int rows, int columns, int y, int x)
{
    if (x < columns - 3)
    {
        return grid[y][x] * grid[y][x + 1] * grid[y][x + 2] * grid[y][x + 3];
    }
    return 0;
}

long long down(int** grid, int rows, int columns, int y, int x)
{
    if (y < rows - 3)
    {
        return grid[y][x] * grid[y + 1][x] * grid[y + 2][x] * grid[y + 3][x];
    }
    return 0;
}

long long diagonally_up(int** grid, int rows, int columns, int y, int x)
{
    if (x < columns - 3 && y < rows - 3)
    {
        return grid[y + 3][x] * grid[y + 2][x + 1] * grid[y + 1][x + 2] * grid[y][x + 3];
    }
    return 0;
}

long long diagonally_down(int** grid, int rows, int columns, int y, int x)
{
    if (x < columns - 3 && y < rows - 3)
    {
        return grid[y][x] * grid[y + 1][x + 1] * grid[y + 2][x + 2] * grid[y + 3][x + 3];
    }
    return 0;
}

long long max(long long a, long long b)
{
    if (a < b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

long long largest_grid_product(int** grid, int rows, int columns)
{
    long long largest_product = 0;

    for (int row_index = 0; row_index < rows; row_index ++)
    {
        for (int column_index = 0; column_index < columns; column_index ++)
        {
            largest_product = max(right(grid, rows, columns, row_index, column_index), largest_product);
            largest_product = max(down(grid, rows, columns, row_index, column_index), largest_product);
            largest_product = max(diagonally_down(grid, rows, columns, row_index, column_index), largest_product);
            largest_product = max(diagonally_up(grid, rows, columns, row_index, column_index), largest_product);
        }
    }

    return largest_product;
}

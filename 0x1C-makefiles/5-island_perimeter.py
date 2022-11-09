#!/usr/bin/python3
"""
A function that returns the perimeter
of an island described in grid
"""


def island_perimeter(grid):
    """
    Return grid perimeter

    Grid is an array:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).

    Perimeter of a grid = 1 * 4 => 4
    """
    total_grid, collapsed_grid = 0, 0
    width, height = len(grid[0]), len(grid)

    for i in range(height):
        for x in range(width):
            if grid[i][x] == 1:
                # total number of grid
                total_grid += 1

                # Number of Collapsed grid
                if (i > 0 and grid[i-1][x] == 1):
                    collapsed_grid += 1
                if (x > 0 and grid[i][x-1] == 1):
                    collapsed_grid += 1

    # absolute perimeter is calculated as such:
    # Number of total grid multiply by 4 minus
    # Number of collapsed grid multiply by 2
    # One from each grid
    return (total_grid * 4) - (collapsed_grid * 2)

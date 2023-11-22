#!/usr/bin/python3
"""
Island perimeter module
"""


def island_perimeter(grid):
    """
    function that returns the perimeter
    of an island
    Arg:
        grid: list of lists
    """
    row = len(grid)
    column = len(grid[0]) if row else 0
    perimeter = 0

    for i in range(row):
        for j in range(column):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter

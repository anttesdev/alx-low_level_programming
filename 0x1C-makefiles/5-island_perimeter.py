#!/usr/bin/python3
"""
A function to calculate the perimeter of an Island
"""


def island_perimeter(grid):
    """
    Args:
    - grid (list of list of int): Represents the grid where 0
    represents water and 1 represents land.

    Returns:
    - int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter

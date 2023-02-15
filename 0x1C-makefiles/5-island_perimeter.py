#!/usr/bin/python3
"""
Module containing the 'island_perimeter' function
"""


def island_perimeter(grid):
    """
    Function that returns the perimeter of an island.

    Args:
        grid(list): 2D list of integers representing an island.
    Return:
        Perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for h in range(height):
        for w in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1

    return size * 4 - edges * 2

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

    for y in range(height):
        for x in range(width):
            if grid[y][x] == 1:
                size += 1
                if (x > 0 and grid[y][x - 1] == 1):
                    edges += 1
                if (y > 0 and grid[y - 1][x] == 1):
                    edges += 1

    return size * 4 - edges * 2

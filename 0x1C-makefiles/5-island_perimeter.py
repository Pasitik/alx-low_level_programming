#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    peremeter = 0
    width = len(grid[0])
    height = len(grid)
    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                if col <= width and grid[row][col + 1] == 0:
                    peremeter += 1
                if col > 0 and grid[row][col - 1] == 0:
                    peremeter += 1
                if row <= height and grid[row + 1][col] == 0:
                    peremeter += 1
                if row > 0 and grid[row - 1][col] == 0:
                    peremeter += 1

    return peremeter

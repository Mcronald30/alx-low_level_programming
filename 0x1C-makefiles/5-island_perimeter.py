#!/usr/bin/python3
"""Class Island Perimeter"""


def island_perimeter(grid):
    """Calculate the perimeter of the island described in the grid"""
    c = 0
    row = len(grid) - 1
    col = len(grid[0]) - 1

    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    c += 1
                if j == 0 or grid[i][j - 1] != 1:
                    c += 1
                if j == col or grid[i][j + 1] != 1:
                    c += 1
                if i == row or grid[i + 1][j] != 1:
                    c += 1
    return c

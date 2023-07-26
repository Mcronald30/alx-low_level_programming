#!/usr/bin/python3
"""
Class Island Perimeter
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (List[List[int]]): A rectangular grid containing 0's
    (water zones) and 1's (land zones).

    Returns:
    int: The perimeter of the island.
    """
    rows = len(grid) - 1
    cols = len(grid[0]) - 1
    perimeter = 0

    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    c += 1
                    if j == 0 or grid[i][j - 1] != 1:
                        c += 1
                        if j == cols or grid[i][j + 1] != 1:
                            c += 1
                            if i == rows or grid[i + 1][j] != 1:
                                c += 1
    return c

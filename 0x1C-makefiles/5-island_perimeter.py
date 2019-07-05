#!/usr/bin/python3
"""
5-islita
"""


def island_perimeter(grid):
    """ holi """
    numerito = 0
    for i in range(len(grid)):
        for j in range(len(grid)):
            if grid[i][j] == 1:
                if j != 0 and grid[i][j - 1] == 0:
                    numerito += 1
                if ((j + 1 < len(grid[i])) and
                    grid[i][j + 1] == 0):
                    numerito += 1
                if i != 0 and grid[i - 1][j] == 0:
                    numerito += 1
                if (i + 1 < len(grid) and
                    grid[i + 1][j] == 0):
                    numerito += 1
    return numerito

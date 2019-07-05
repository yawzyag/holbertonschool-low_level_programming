#!/usr/bin/python3
"""
5-islita
"""


def island_perimeter(grid):
    numerito = 0
    for i in range(len(grid)):
        for j in range(len(grid)):
            if grid[i][j] == 1:
                if grid[i][j - 1] == 0:
                    numerito += 1
                if grid[i][j + 1] == 0:
                    numerito += 1
                if grid[i - 1][j] == 0:
                    numerito += 1
                if grid[i + 1][j] == 0:
                    numerito += 1
    return numerito

#!/usr/bin/python3
"""
5-islita
"""
R = 5
C = 6


def numofneighbour(mat, i, j):

    count = 0

    if (i > 0 and mat[i - 1][j]):
        count += 1

    if (j > 0 and mat[i][j - 1]):
        count += 1

    if (i < R-1 and mat[i + 1][j]):
        count += 1

    if (j < C-1 and mat[i][j + 1]):
        count += 1

    return count


def findperimeter(mat):

    perimeter = 0

    for i in range(0, R):
        for j in range(0, C):
            if (mat[i][j]):
                perimeter += (4 - numofneighbour(mat, i, j))

    return perimeter


def numofneighbour(mat, i, j):

    count = 0

    if (i > 0 and mat[i - 1][j]):
        count += 1
    if (j > 0 and mat[i][j - 1]):
        count += 1

    if (i < R-1 and mat[i + 1][j]):
        count += 1

    if (j < C-1 and mat[i][j + 1]):
        count += 1

    return count


def island_perimeter(grid):
    """ holi """

    perimeter = 0
    for i in range(0, R):
        for j in range(0, C):
            if (grid[i][j]):
                perimeter += (4 - numofneighbour(grid, i, j))

    return perimeter

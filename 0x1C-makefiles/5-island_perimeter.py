#!/usr/bin/python3
"""
5-islita
"""


def numofneighbour(mat, i, j, a1, a2):

    count = 0

    if (i > 0 and mat[i - 1][j]):
        count += 1
    if (j > 0 and mat[i][j - 1]):
        count += 1

    if (i < a1-1 and mat[i + 1][j]):
        count += 1

    if (j < a2-1 and mat[i][j + 1]):
        count += 1

    return count


def island_perimeter(grid):
    """ holi """

    array1 = len(grid)
    array2 = len(grid[0])
    perimeter = 0
    for i in range(0, array1):
        for j in range(0, array2):
            if (grid[i][j]):
                perimeter += (4 - numofneighbour(grid, i, j, array1, array2))

    return perimeter

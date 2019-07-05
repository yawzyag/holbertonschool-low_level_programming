#!/usr/bin/python3
"""
5-islita
"""


def island_perimeter(grid):
    """ holi """

    a1 = len(grid)
    a2 = len(grid[0])
    count = 0
    perimeter = 0
    for i in range(a1):
        for j in range(a2):
            if (grid[i][j]) == 1:
                if (i > 0 and grid[i - 1][j]):
                    count += 1

                if (j > 0 and grid[i][j - 1]):
                    count += 1

                if (i < a1-1 and grid[i + 1][j]):
                    count += 1

                if (j < a2-1 and grid[i][j + 1]):
                    count += 1
                if count != perimeter:
                    perimeter = count
                    perimeter += 4

    return perimeter

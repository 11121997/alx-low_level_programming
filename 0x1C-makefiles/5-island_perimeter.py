#!/usr/bin/python3
#Island Perimeter module


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    width = len(grid[0])
    height = len(grid)
    edges = 0
    C = 0
    S = 0

    for h in range(height):
        for k in range(width):
            if grid[h][k] == 1:
                S += 1
                if (k > 0 and grid[h][k - 1] == 1):
                    edges += 1
                if (h > 0 and grid[h - 1][k] == 1):
                    edges += 1

                C = (S * 4) - (edges * 2)
    return C

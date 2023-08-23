#!/usr/bin/python3
"""returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0 or not grid[i - 1][j]:
                    per += 1
                if grid[i][j + 1] == 0 or not grid[i][j + 1]:
                    per += 1
                if grid[i + 1][j] == 0 or not grid[i + 1][j]:
                    per += 1
                if grid[i][j - 1] == 0 or not grid[i][j - 1]:
                    per += 1
    return per

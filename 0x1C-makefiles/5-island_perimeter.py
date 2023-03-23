#!/usr/bin/env python3
"""Island Perimeter Technical Interview"""


def num_water_neighbors(grid, land, water):
    """Function that returns the land & water grid"""

    num = 0

    if land <= 0 or not grid[land - 1][water]:
        num += 1
    if water <= 0 or not grid[land][water - 1]:
        num += 1
    if water >= len(grid[land]) - 1 or not grid[land][water + 1]:
        num += 1
    if land >= len(grid) - 1 or not grid[land + 1][water]:
        num += 1

    return num


def island_perimeter(grid):
    """Function that returns the perimeter of grid"""

    perime = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perime += num_water_neighbors(grid, i, j)
    return perime

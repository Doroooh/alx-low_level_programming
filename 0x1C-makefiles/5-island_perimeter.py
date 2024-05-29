#!/usr/bin/python3
"""To define the island perimeter (distance) measuring function"""

def island_perimeter(grid):
    """Returning perimiter of the island.
    grid is a representation of  water by 0 and land by 1.

    Args:
    the grid (list): List of the list of the integers that represent island.
    Returns: perimeter of island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for k in range(height):
        for l in range(width):
            if grid[k][l] == 1:
                size += 1
                if (l > 0 and grid[k][l - 1] == 1):
                    edges += 1
                if (k > 0 and grid[k - 1][l] == 1):
                    edges += 1
    return size * 4 - edges * 2

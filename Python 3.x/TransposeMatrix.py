"""
Transpose of a matrix:
1. Using numpy.
2. Manually without use of library.
"""
import numpy as np

# let x, y be a matrix
x = [[1, 2, 3],
     [4, 5, 6]]

# x has 2 rows 3 columns

y = [[9, 8, 7, 6, 5]]
# y has 1 row and 5 columns

# Transpose of x => 3 rows x 2 columns
# Transpose of y => 5 rows x 1 columns

# Using numpy
print("Before transpose:\n {}".format(x))
print("After transpose:\n {}".format(np.transpose(x)))

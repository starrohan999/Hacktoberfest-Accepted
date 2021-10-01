import numpy as np

array1 = [1,4,
          2,9]

array2 = [3,4,
          2,6]

matrix1 = np.array([array1])
matrix2 = np.array([array2])

result = matrix1 + matrix2
print(result)
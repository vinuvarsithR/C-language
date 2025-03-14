import numpy as np
values_list = list(range(1, 21))
array = np.array(values_list)
array = array.reshape(4, 5)
print("Original Array:")
print(array)
row_slice = slice(0, 3) 
col_slice = slice(1, 3)  
subarray = array[row_slice, col_slice]
print("\nExtracted Subarray:")
print(subarray)
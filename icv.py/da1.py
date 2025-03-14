import numpy as np
user_input = input("Enter integers separated by spaces: ").split()
int_list = list(map(int, user_input))
int_array = np.array(int_list)
sortedarray = np.sort(np.unique(int_array))
print("Sorted Array:", sortedarray)
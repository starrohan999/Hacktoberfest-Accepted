# -*- coding: utf-8 -*-
"""
 python code to implement Selection Sort.

@author: rajmadhu0406
"""

def swap(List, x, y):
    temp = List[x]
    List[x] = List[y]
    List[y] = temp

def SelectionSort(List):
    min_index = 0
    n = len(List)
    for i in range(n):
        min_index = i
        for j in range(i,n):
            if(List[j] < List[min_index]):
                min_index = j
        swap(List, i, min_index)
    #print(List)
    return List

List = [4, 2, 5, 1, 3]
print("Sorted List : ", SelectionSort(List))
    
            
        
    
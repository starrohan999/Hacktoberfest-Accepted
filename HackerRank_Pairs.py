#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pairs' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER k
#  2. INTEGER_ARRAY arr
#

def pairs(k, arr):
    # Write your code here
    #Two pointers Appraoch
    arr.sort()
    n=len(arr)
    i=0
    j=1
    c=0   # Counter for counting the number of pairs
    while(j<n):
        diff=arr[j]-arr[i]
        if diff==k:
            c += 1  
            j += 1
        elif diff<k:  #If difference is less than target that means we should increment the j in order to increment the minuend.
            j += 1
        else:
            i += 1    # if the difference is greater than the target that means we need to increment the subtrahend i.e. i to reduce the difference to the target.
    return c

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    result = pairs(k, arr)

    fptr.write(str(result) + '\n')

    fptr.close()

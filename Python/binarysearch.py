def binarysearch(arr, target):
    n=len(arr)
    arr=sorted(arr)

    l=0
    r=n-1

    while (l<=r):
        half=int((l+r)/2)
        check=arr[half]
        if target == check:
            return half
        elif target > check:
            l=half+1
        elif target < check:
            r=half-1
    return "No solution in array."

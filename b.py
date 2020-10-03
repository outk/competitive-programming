def bsearch(array, item):
    low = 0
    high = len(array) - 1
    mid = (low + high)//2

    while low <= high:
        if array[mid] == item:
            return True, mid, item
        elif array[mid] > item:
            high = mid - 1
            mid = (high + low)//2
        else:
            low = mid + 1
            mid = (high + low)//2

    return False, -1, -1

if __name__ == "__main__":
    ls = [3, 5,2,5,2,4,5,224,24362,6,2435345,62546,562,25]

    ls = sorted(ls, key=lambda x: x[1])

    print(ls)

    isFound, index, value = bsearch(ls, 7)

    print(isFound, index, value)
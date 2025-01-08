def binary_search(array: list[int], target: int) -> int:
    left: int = 0
    right: int = len(array)-1
    while(left<right):
        mid: int = left+(right-left)//2
        if array[mid] == target:
            return mid
        if array[mid] > target:
            right = mid-1
        else:
            left = mid+1
    return -1

def main():
    array: list[int] = [1, 2, 4, 5, 7, 11, 41, 100]
    target: int = 11
    print(binary_search(array, 11))

if __name__ == '__main__':
    main()
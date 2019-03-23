data = [2,4,5,6,7,8,9,10,11,12,13,14,15,16,17,22,19,25,27,28,33,37]
target = 48

# Linear Search
def linear_search(data, target):
    for i in range(len(data)):
        if data[i] == target:
            return True
    return False

print(linear_search(data, target))


# Iterative Binary Search
def binary_search_iterative(data, target):
    low = 0
    high = len(data) - 1

    while low <= high:
        mid = (low + high) // 2
        if target == data[mid]:
            return True
        elif target < data [mid]:
            high = mid - 1
        else:
            low = mid + 1
    return False

print(binary_search_iterative(data, target))

# Recursive Binary Search
def binary_search_recursive(data, target, low, high):
    if low > high:
        return False
    else:
        mid = (low + high) // 2
        if target == data[mid]:
            return True
        elif target < data[mid]:
            return binary_search_recursive(data, target, low, mid-1)
        else:
            return binary_search_recursive(data, target, high, mid+1)


print(binary_search_recursive(data, target, 0, len(data)-1))





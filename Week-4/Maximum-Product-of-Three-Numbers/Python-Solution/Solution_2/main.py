def maximumProduct(arr):
    arr.sort()
    n = len(arr)
    result = max(arr[n - 1] * arr[n - 2] * arr[n - 3], arr[0] * arr[1] * arr[n - 1])
    print(result)

def max(a, b):
    if a > b:
        return a
    return b

if __name__ == "__main__":
    maximumProduct([1, 2, 3])
    maximumProduct([1, 2, 3, 4])
    maximumProduct([-1, -2, -3])
    maximumProduct([-1, -2, -3, 0, 1, 2])

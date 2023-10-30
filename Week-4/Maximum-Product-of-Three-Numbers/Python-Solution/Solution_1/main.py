import math

def max(a, b):
    if a > b:
        return a
    return b

def maximumProduct(arr):
    max_product = -math.inf
    n = len(arr)
    for i in range(n):
        for j in range(i + 1, n):
            for k in range(j + 1, n):
                max_product = max(max_product, arr[i] * arr[j] * arr[k])
    print(max_product)

if __name__ == "__main__":
    maximumProduct([1, 2, 3])
    maximumProduct([1, 2, 3, 4])
    maximumProduct([-1, -2, -3])
    maximumProduct([-1, -2, -3, 0, 1, 2])

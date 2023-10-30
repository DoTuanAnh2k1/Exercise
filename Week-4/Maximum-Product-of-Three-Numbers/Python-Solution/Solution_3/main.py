def find_three_largest_numbers(arr):
    a, b, c = float('-inf'), float('-inf'), float('-inf')

    for num in arr:
        if num > c:
            a, b, c = b, c, num
        elif num > b:
            a, b = b, num
        elif num > a:
            a = num

    return a, b, c

def find_two_smallest_numbers(arr):
    first_smallest, second_smallest = float('inf'), float('inf')

    for num in arr:
        if num < first_smallest:
            second_smallest, first_smallest = first_smallest, num
        elif num < second_smallest and num != first_smallest:
            second_smallest = num

    if second_smallest == float('inf'):
        second_smallest = -1

    return first_smallest, second_smallest

def maximum_product(arr):
    a, b, c = find_three_largest_numbers(arr)
    d, e = find_two_smallest_numbers(arr)
    result = max(a * b * c, c * d * e)
    print(result)

if __name__ == "__main__":
    arr1 = [1, 2, 3]
    maximum_product(arr1)

    arr2 = [1, 2, 3, 4]
    maximum_product(arr2)

    arr3 = [-1, -2, -3]
    maximum_product(arr3)

    arr4 = [-1, -2, -3, 0, 1, 2]
    maximum_product(arr4)

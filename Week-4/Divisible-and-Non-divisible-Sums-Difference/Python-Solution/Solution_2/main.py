def difference_of_sums(n, m):
    sum_n = n * (n + 1) // 2
    n -= n % m
    number_of_divisible_m = (n - m) // m + 1
    sum1 = number_of_divisible_m * m + (number_of_divisible_m * (number_of_divisible_m - 1) * m) // 2

    print(sum_n - 2 * sum1)

def main():
    difference_of_sums(10, 3)
    difference_of_sums(5, 6)

if __name__ == "__main__":
    main()

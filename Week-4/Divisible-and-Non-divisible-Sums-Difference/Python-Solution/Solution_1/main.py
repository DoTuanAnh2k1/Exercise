def difference_of_sums(n, m):
    sum1, sum2 = 0, 0
    for i in range(1, n + 1):
        if i % m == 0:
            sum1 = sum1 + i
        else:
            sum2 = sum2 + i
    print(sum2 - sum1)

def main():
    difference_of_sums(10, 3)
    difference_of_sums(5, 6)

if __name__ == "__main__":
    main()

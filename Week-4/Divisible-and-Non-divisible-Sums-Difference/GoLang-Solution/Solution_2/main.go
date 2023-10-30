package main

func differenceOfSums(n, m int) {
	sum := n * (n + 1) / 2
	n = n - n % m
	numberOfDivisibleM := (n - m) / m + 1
	sum1 := numberOfDivisibleM * m + numberOfDivisibleM * (numberOfDivisibleM - 1) * m / 2

	println(sum - 2 * sum1)
}

func main () {
	differenceOfSums(10, 3)
	differenceOfSums(5, 6)
}
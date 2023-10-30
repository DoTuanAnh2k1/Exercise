package main

import "fmt"

func differenceOfSums(n, m int) {
	sum1, sum2 := 0, 0
	for i := 1; i <= n; i++ {
		if i % m == 0 {
			sum1 = sum1 + i
		} else {
			sum2 = sum2 + i
		}
	}
	fmt.Printf("%d \n",sum2 - sum1)
}

func main () {
	differenceOfSums(10, 3)
	differenceOfSums(5, 6)
}
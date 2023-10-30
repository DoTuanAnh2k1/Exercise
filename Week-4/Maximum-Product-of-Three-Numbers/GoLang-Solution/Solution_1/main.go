package main

import (
	"fmt"
	"math"
)

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func maximumProduct(arr []int) {
	maxProduct := math.MinInt
	n := len(arr)
	for i := 0; i < n; i++ {
		for j := i + 1; j < n; j++ {
			for k := j + 1; k < n; k++ {
				maxProduct = max(maxProduct, arr[i] * arr[j] * arr[k])
			}
		}
	}
	fmt.Println(maxProduct)
}

func main () {
	maximumProduct([]int{1, 2, 3})
	maximumProduct([]int{1,2,3,4})
	maximumProduct([]int{-1,-2,-3})
	maximumProduct([]int{-1,-2,-3, 0, 1, 2})
}
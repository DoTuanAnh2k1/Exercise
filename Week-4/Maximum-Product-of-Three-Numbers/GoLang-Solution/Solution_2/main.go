package main

import (
	"fmt"
	"sort"
)

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func maximumProduct(arr []int) {
	sort.Ints(arr)
	n := len(arr)
	fmt.Println(max(arr[n - 1] * arr[n - 2] * arr[n - 3], arr[0] * arr[1] * arr[n - 1]))
}

func main () {
	maximumProduct([]int{1, 2, 3})
	maximumProduct([]int{1,2,3,4})
	maximumProduct([]int{-1,-2,-3})
	maximumProduct([]int{-1,-2,-3, 0, 1, 2})
}
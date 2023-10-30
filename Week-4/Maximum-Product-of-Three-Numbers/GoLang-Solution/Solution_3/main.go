package main

import (
	"fmt"
	"math"
)

func findThreeLargestNumbers(arr []int) (int, int, int) {
    largest := [3]int{math.MinInt, math.MinInt, math.MinInt}

    for _, num := range arr {
        if num > largest[2] {
            largest[0], largest[1], largest[2] = largest[1], largest[2], num
        } else if num > largest[1] {
            largest[0], largest[1] = largest[1], num
        } else if num > largest[0] {
            largest[0] = num
        }
    }
    return largest[0], largest[1], largest[2]
}

func findTwoSmallestNumbers(arr []int) (int, int) {
	firstSmallest, secondSmallest := math.MaxInt, math.MaxInt

	for _, num := range arr {
		if num < firstSmallest {
			secondSmallest = firstSmallest
			firstSmallest = num
		} else if num < secondSmallest && num != firstSmallest {
			secondSmallest = num
		}
	}

	if secondSmallest == math.MaxInt {
		secondSmallest = -1
	}
	return firstSmallest, secondSmallest
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func maximumProduct(arr []int) {
	a, b, c := findThreeLargestNumbers(arr)
	d, e := findTwoSmallestNumbers(arr)

	fmt.Println(max(a * b * c, c * d * e))
}

func main () {
	maximumProduct([]int{1, 2, 3})
	maximumProduct([]int{1,2,3,4})
	maximumProduct([]int{-1,-2,-3})
	maximumProduct([]int{-1,-2,-3, 0, 1, 2})
}
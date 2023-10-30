package main

import "fmt"

func numberOfGoodPairs(arr []int) {
	count := 0
	for i := 0; i < len(arr); i++ {
		for j := 0; j < i; j++ {
			if arr[i] == arr[j] {
				count++
			}
		}
	}
	fmt.Println(count)
}

func main() {
	numberOfGoodPairs([]int{1, 2, 3, 1, 1, 3})
	numberOfGoodPairs([]int{1, 1, 1, 1})
	numberOfGoodPairs([]int{1, 2, 3})
}

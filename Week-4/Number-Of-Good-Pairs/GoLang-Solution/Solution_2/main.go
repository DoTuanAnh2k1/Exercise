package main

import "fmt"

func numberOfGoodPairs(arr []int) {
	frequency := make(map[int]int)

	count := 0
	for i := range arr {
		if frequency[arr[i]] == 0 {
			frequency[arr[i]]++
			continue
		}
		if frequency[arr[i]] != 0 {
			count = count + frequency[arr[i]]
			frequency[arr[i]]++
		}
	}
	fmt.Println(count)
}

func main() {
	numberOfGoodPairs([]int{1, 2, 3, 1, 1, 3})
	numberOfGoodPairs([]int{1, 1, 1, 1})
	numberOfGoodPairs([]int{1, 2, 3})
}

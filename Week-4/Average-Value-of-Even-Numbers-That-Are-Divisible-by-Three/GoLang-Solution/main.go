package main

import "fmt"

func averageValue(arr []int) {
	sum, count := 0, 0
	for _, v := range arr {
		if v % 6 == 0 {
			sum = sum + v
			count ++
		}
	}

	if count == 0 {
		fmt.Println("0")
		return
	} else {
		fmt.Println(float32(sum) / float32(count))
	}
}

func main() {
	averageValue([]int{1,3,6,10,12,15})
	averageValue([]int{1,2,4,7,10})
}
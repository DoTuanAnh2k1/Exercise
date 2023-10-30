def number_of_good_pairs(arr):
    count = 0
    for i in range(len(arr)):
        for j in range(i):
            if arr[i] == arr[j]:
                count += 1
    print(count)

if __name__ == "__main__":
    number_of_good_pairs([1, 2, 3, 1, 1, 3])
    number_of_good_pairs([1, 1, 1, 1])
    number_of_good_pairs([1, 2, 3])

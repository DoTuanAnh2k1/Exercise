def number_of_good_pairs(arr):
    frequency = {}

    count = 0
    for num in arr:
        if num not in frequency:
            frequency[num] = 1
        else:
            count += frequency[num]
            frequency[num] += 1
    print(count)

if __name__ == "__main__":
    number_of_good_pairs([1, 2, 3, 1, 1, 3])
    number_of_good_pairs([1, 1, 1, 1])
    number_of_good_pairs([1, 2, 3])

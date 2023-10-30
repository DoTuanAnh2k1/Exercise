
def averageValue(arr):
    sum = 0
    count = 0
    for v in arr:
        if v % 6 == 0:
            sum = sum + v
            count = count + 1
    
    if count == 0:
        print(0)
        return
    else:
        print(float(sum)/count)
     
if __name__ == "__main__":
    print(averageValue([1,3,6,10,12,15]))
    print(averageValue([1,2,4,7,10]))
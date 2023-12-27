#include <iostream>
#include <vector>
using namespace std;

/*
    Warm up 1:
    Find the largest number in the array.
*/

int MaxArr(vector<int> arr) {
    int ans = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > ans) {
            ans = arr[i];
        }
    }
    return ans;
}

int main() {
    cout << MaxArr(vector<int> {1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    return 0;
}
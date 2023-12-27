#include <iostream>
#include <vector>
using namespace std;

/*
    Warm up 2:
    Count the number of even elements in an array.
*/

int CountEven(vector<int> arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) { // or maybe just (arr[i] & 1)
            ans ++;
        }
    }
    return ans;
}

int main() {
    cout << CountEven(vector<int> {1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    return 0;
}
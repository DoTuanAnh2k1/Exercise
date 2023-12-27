#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int CountBricks(int n, vector <int> a) {
    sort(a.begin(), a.end());
    int ans = 1;
    int target = a[a.size() - 1];
    for (int i = a.size() - 2; i >= 0; i --) {
        if (target == 0) {
            return ans;
        }
        target = min(target - 1, a[i]);
        ans++;
    }
    return ans;
}

int main() {
    cout << CountBricks(3, vector<int>{1, 2, 1, 1}) << endl;
    cout << CountBricks(7, vector<int>{1, 1, 1, 5, 1, 1, 10}) << endl;
    cout << CountBricks(7, vector<int>{10, 10, 10, 10, 10, 10, 10}) << endl;
    return 0;
}
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int maxArr(vector<int> arr) {
    int ans = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (ans < arr[i]) {
            ans = arr[i];
        }
    }
    return ans;
}

int Lover(string s) {
    vector <int> count(26, 0);
    for (int i = 0; i < s.size(); i++) {
        count[s[i] - 'a'] ++;
    }

    int maxValue = maxArr(count);

    if (2 * maxValue - s.size() > 0) {
        return 2 * maxValue - s.size();
    } else {
        if (s.size() % 2 == 0) {
            return 0;
        } else {
            return 1;
        }
    }
}

int main() {
    cout << Lover("ababababa") << endl;
    cout << Lover("aabc") << endl;
    cout << Lover("avbvvcvvvd") << endl;
    cout << Lover("dacfcc") << endl;

    return 0;
}
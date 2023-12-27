#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int Lover(string s) {
    vector <int> tmp(26, 0);
    for (int i = 0; i < s.size(); i++) {
        tmp[s[i] - 'a'] ++;
    }

    priority_queue <int> pq;
    for (int i = 0; i < 26; i++) {
        if (tmp[i] > 0) {
            pq.push(tmp[i]);
        }
    }

    while (pq.size() >= 2) {
        int item1 = pq.top();
        pq.pop();
        int item2 = pq.top();
        pq.pop();
        if (item1 - 1 > 0) {
            item1 = item1 - 1;
            pq.push(item1);
        }
        if (item2 - 1 > 0) {
            item2 = item2 - 1;
            pq.push(item2);
        }
    }

    if (pq.size() == 1) {
        return pq.top();
    }
    return 0;
}

int main() {
    cout << Lover("ababababa") << endl;
    cout << Lover("aabc") << endl;
    cout << Lover("avbvvcvvvd") << endl;
    cout << Lover("dacfcc") << endl;

    return 0;
}
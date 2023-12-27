#include <iostream>
#include <vector>
#include <string>
using namespace std;

string Keybroad(string s) {
    int n = s.size();
    vector <int> id1;
    vector <int> id2;
    vector <bool> removeId(26, false); 
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            removeId[i] = true;
            if (id1.size() != 0) {
                removeId[id1[id1.size() - 1]] = true;
                id1.pop_back();
            }
        } else if (s[i] == 'b') {
            removeId[i] = true;
            if (id2.size() != 0) {
                removeId[id2[id2.size() - 1]] = true;
                id2.pop_back();
            }
        } else {
            if (isupper(s[i])) {
                id1.push_back(i);
            } else {
                id2.push_back(i);
            }
        }
    }
    
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (removeId[i]) {
            continue;
        }
        ans = ans + s[i];
    }
    return ans;
}

int main() {
    cout << Keybroad("ARaBbbitBaby") << endl;
    cout << Keybroad("BBbB") << endl;
    cout << Keybroad("asadbfbbawebasbababbasdbfbfasd") << endl;
    return 0;
}
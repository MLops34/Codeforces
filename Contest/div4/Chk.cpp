#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, m;
        cin >> s >> m;

        if (s.size() != m.size()) {
            cout << "NO\n";
            continue;
        }
 
        unordered_map<char, int> mpp;
        for (auto ch : s)
            mpp[ch]++;

        bool ok = true;
        for (auto ch : m) {
            if (mpp.find(ch) == mpp.end() || mpp[ch] == 0) {
                ok = false;
                break;
            }
            mpp[ch]--;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}

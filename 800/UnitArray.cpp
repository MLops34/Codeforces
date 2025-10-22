#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int cnt_neg = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == -1) cnt_neg++;
        }

        int ops = 0;

        while (cnt_neg > n / 2) {
            cnt_neg--;
            ops++;
        }

        if (cnt_neg % 2 != 0) {
            ops++;
        }

        cout << ops << "\n";
    }
    return 0;
}

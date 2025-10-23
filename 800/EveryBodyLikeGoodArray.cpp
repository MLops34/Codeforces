#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        int cntOdd = 0, cntEven = 0; // total merges for odd & even sequences

        int cnt = 1; // length of current same-parity block
        for (int i = 1; i < n; i++) {
            if (arr[i] % 2 == arr[i - 1] % 2) {
                cnt++;
            } else {
                if (arr[i - 1] % 2 == 0)
                    cntEven += (cnt - 1);
                else
                    cntOdd += (cnt - 1);
                cnt = 1; // reset for next block
            }
        }
        // handle last block
        if (arr[n - 1] % 2 == 0)
            cntEven += (cnt - 1);
        else
            cntOdd += (cnt - 1);

        cout << cntOdd + cntEven << "\n";
    }
    return 0;
}


// Or same approach just check if adjacent are odd ans+=1 or if even too and just print
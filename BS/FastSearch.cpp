#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    int k;
    cin >> k;
    while(k--){
        long long l,r;
        cin >> l >> r;

        // lower_bound: first index >= l
        int low = 0, high = n-1;
        int lB = n; 
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] >= l){
                lB = mid;
                high = mid - 1;
            } else low = mid + 1;
        }

        // upper_bound: first index > r
        low = 0; high = n-1;
        int ub = n; 
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] > r){
                ub = mid;
                high = mid - 1;
            } else low = mid + 1;
        }

        cout << ub - lB << "\n";
    }

    return 0;
}

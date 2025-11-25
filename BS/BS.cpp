#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , k;
    cin >> n >> k;
    vector<int>arr(n),query(k);
    for(int i=0;i<n;i++) cin >> arr[i];
    for(int i=0;i<k;i++) cin >> query[i];

    for(int i=0;i<k;i++){
        bool flag=false;
        int low=0,high=n-1;
        int targ=query[i];
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==targ){
                flag=true;
                break;
            }else if(arr[mid]>targ) high=mid-1;
            else low=mid+1;
        }

        if(flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}
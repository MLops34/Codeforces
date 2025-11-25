#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , k;
    cin >> n >> k;
    vector<int>arr(n),query(k);
    for(int i=0;i<n;i++) cin >> arr[i];
    for(int i=0;i<k;i++) cin >> query[i];

    for(int i=0;i<k;i++){
        int targ=query[i];
        int low=-1,high=n;

        while(low+1<high){
            int mid=(low+high)/2;
            if(arr[mid]>targ){
                high=mid;
            }else low=mid;
        }
    
        cout << high +1 << "\n";
    }



    return 0;
}
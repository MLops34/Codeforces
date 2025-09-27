#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;        
class Solution{
    public:
    int solve(vector<int>&arr,int k){
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==k) cnt++;
        }
        return cnt;
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        Solution obj;   
        cout << obj.solve(arr,k) << '\n';
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;        
class Solution{
    public:
    int solve(vector<int>&arr,int n){
        int ans=0,moves=0;
        int cnt0s=0,cntN1s=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0) cnt0s++;
            if(arr[i]==-1) cntN1s++;
        }
        if(cntN1s%2!=0) moves=2;

        
        ans=moves+cnt0s;
        return ans;
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;   
        cout << obj.solve(arr,n) << endl;
        return 0;
        
    }
    
}
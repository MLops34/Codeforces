#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;        
class Solution{
    public:
    int solve(vector<int>&arr,int n){
        sort(arr.begin(),arr.end());
        int a=0,b=0,i=0,j=i+1;
        int maxi=0;
        while(i+1<n && j < n){
            a=arr[i];
            b=arr[j];
            int diff=abs(a-b);
            maxi=max(maxi,diff);
            i=j+1;
            j=j+2;
        }
        return maxi;
    }
};

int main(){
    int t;
    cin >> t;
        int n;
        cin >> n;
        vector<int>arr={2,3,4,5,5};
        Solution obj;   
        cout << obj.solve(arr,6) << '\n';
    return 0;
}
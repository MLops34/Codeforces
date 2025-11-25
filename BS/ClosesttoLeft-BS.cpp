#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    vector<int>a(n),q(k);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<k;i++)cin>>q[i];
    for(int i=0;i<k;i++){
        int x=q[i],low=-1,high=n;
        while(low+1<high){
            int mid=(low+high)/2;
            if(a[mid]<=x)low=mid;
            else high=mid;
        }
        cout<<low+1<<"\n";
    }
}

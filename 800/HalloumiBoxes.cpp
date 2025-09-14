#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        long long n ,k;
    cin >> n >> k;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<long long> temp=a; 
    sort(temp.begin(), temp.end());
    
    if(temp==a ||  k>1){
        cout<< "Yes" << endl;
    }else{
        cout<< "No" << endl;
    }
    }
    return 0;
}
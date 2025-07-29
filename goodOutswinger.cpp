#include<bits/stdc++.h>
using namespace std;

bool isEnough(vector<long long>&arr, long long mid, long long k){
    long long sum= 0;

    for(int i=0; i<arr.size(); i++){
        sum += mid/arr[i];
        if(sum>=k) return true;
    }

    return sum >= k ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    long long k;
    cin>>n;
    cin>>k;
    vector<long long>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i]; 
    }

    long long ans =-1; 
    long long l=1, r = 1e18;
    while(l<=r){
        long long mid = l + (r-l)/2;

        if(isEnough(arr, mid, k)){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid + 1;
        }
    }

    cout<<ans<<"\n";
    return 0;
}
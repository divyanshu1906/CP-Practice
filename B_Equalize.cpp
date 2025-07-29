#include<bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        vector<long long>arr(n);
        for(long long i=0; i<n; i++){
            cin>>arr[i];
        }

        set<long long>st;
        for(long long &n : arr){
            st.insert(n);
        }

        vector<long long>nums;
        for(auto &n : st){
            nums.push_back(n);
        }

        long long maxAns = 0;
        for(long long i=0; i<nums.size(); i++){
            long long next = nums[i] + n;
            auto it = lower_bound(nums.begin(), nums.end(), next);
            long long maxEle = it-nums.begin()-i;
            maxAns = max(maxAns, maxEle);
        }

        cout<<maxAns<<"\n";
    }

    return 0;
}
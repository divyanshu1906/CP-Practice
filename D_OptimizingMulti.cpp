#include<bits/stdc++.h>
using namespace std;

int minMoneySpent(int idx, int n, vector<int>&nums, vector<int>&dp, int k){
    if(idx >= n-1){
        return 0;
    }

    if(dp[idx] != -1 ) return dp[idx];
    
    int minAns = INT_MAX;
    for(int i=idx+1; i < min(n, i+k); i++){
        int ans = abs(nums[idx] - nums[idx+i]) + minMoneySpent(idx+1, n, nums, dp, k);
        minAns = min(ans, minAns);
    }

    return minAns;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int k;
    cin>>n>>k;

    vector<int>arr(n);
    vector<int>dp(n+1, -1);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<minMoneySpent(0, n, arr, dp, k);
    return 0;
}
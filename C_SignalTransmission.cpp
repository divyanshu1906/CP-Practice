#include<bits/stdc++.h>
using namespace std;

int minMoneySpent(int idx, int n, vector<int>&nums, vector<int>&dp){
    if(idx >= n-1){
        return 0;
    }

    if(dp[idx] != -1 ) return dp[idx];

    int oneStep = abs(nums[idx] - nums[idx+1]) + minMoneySpent(idx+1, n, nums, dp);
    int twoStep = INT_MAX;

    if(idx+2 <n ){
        twoStep = abs(nums[idx] - nums[idx+2]) + minMoneySpent(idx+2, n, nums, dp);
    }

    return dp[idx] = min(oneStep, twoStep);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    vector<int>arr(n);
    vector<int>dp(n+1, -1);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<minMoneySpent(0, n, arr, dp);
    return 0;
}
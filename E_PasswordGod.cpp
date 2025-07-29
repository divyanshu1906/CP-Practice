#include<bits/stdc++.h> 
using namespace std;

bool findMoves(int idx, int totalSum, vector<int>&moves, int n, vector<vector<int>>&dp){
    if(idx == n){
        if(totalSum==0) return true;
        return false;
    }

    if(dp[idx][totalSum] != -1) return dp[idx][totalSum];

    int plusSum = (totalSum + moves[idx]) % 360;
    int minusSum = (totalSum - moves[idx] + 360) % 360;  

    bool plus = findMoves(idx+1, plusSum, moves, n, dp);
    bool substract = findMoves(idx+1, minusSum, moves, n, dp);

    return dp[idx][totalSum] = plus || substract;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<int>moves(n);
    for(int i=0; i<n; i++){
        cin>>moves[i];
    }

    vector<vector<int>>dp(n+1, vector<int>(360, -1));
    if(findMoves(0, 0, moves, n, dp)){
        cout<<"YES"<<"\n";
    }
    else cout<<"NO"<<"\n";

    return 0;
}
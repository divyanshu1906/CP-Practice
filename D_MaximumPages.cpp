#include<bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, money;
    cin>>n>>money;

    vector<int>bookPrice(n), numberOfPage(n);
    for(int i=0; i<n; i++){
        cin>>bookPrice[i];
    }

    for(int i=0; i<n; i++){
        cin>>numberOfPage[i];
    }

    vector<int> dp(money + 1, 0);
    
    for(int i = 0; i < n; i++){
        for(int j = money; j >= bookPrice[i]; j--){
            dp[j] = max(dp[j], dp[j - bookPrice[i]] + numberOfPage[i]);
        }
    }
    
    cout << dp[money] << "\n";

    return 0;
}
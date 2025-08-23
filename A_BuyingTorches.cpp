#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int x, y, k;
        cin>>x>>y>>k;

        int stickGainedPerTrade = x - 1;
        int stickNeeded = k * y + k - 1;

        int trade = ((stickNeeded + stickGainedPerTrade - 1) / stickGainedPerTrade);
        trade += k;

        cout<<trade<<"\n";
    }
    
    return 0;
}
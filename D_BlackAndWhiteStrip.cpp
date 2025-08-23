#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        string strip;
        cin>>strip;

        int continuous = 0;
        int tillFind = 0;

        for(int i=0; i<n; i++){
            if(strip[i] == 'B'){
                continuous++;
                tillFind = max(tillFind, continuous);
            }
            else{
                continuous=0;
            }
        }

        if(tillFind >= k){
            cout<<0<<"\n";
            continue;
        }
        
        int whiteCount = 0;
        for (int i = 0; i < k; i++) {
            if (strip[i] == 'W') whiteCount++;
        }

        int ans = whiteCount;
        for (int l = 0, r = k; r < n; l++, r++) {
            if (strip[r] == 'W') whiteCount++;
            if (strip[l] == 'W') whiteCount--;
            ans = min(ans, whiteCount);
        }

        cout<<ans<<"\n";
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int n, x;
        cin>>n>>x;

        vector<int>nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }

        vector<pair<int, int>>segment(n);
        for(int i=0; i<n; i++){
            segment[i] = {nums[i]-x, nums[i]+x};
        }

        int ans = 0;
        int l = segment[0].first;
        int r = segment[0].second;

        for(int i=1; i<n; i++){
            l = max(l, segment[i].first);
            r = min(r, segment[i].second);

            if(l > r){
                ans++;
                l = segment[i].first;
                r = segment[i].second;
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}
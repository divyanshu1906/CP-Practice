#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<pair<int, int>>a;
        for(int i=0; i<n; i++){
            int ele;
            cin>>ele;
            a.push_back({ele, i});
        }

        sort(a.begin(), a.end());


        vector<int>prefix(n);
        prefix[0] = a[0].first;
        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1] + a[i].first; 
        }

        vector<int>ans(n);
        for(int i=0; i<n; i++){

            int totalGreater = i;
            int j = i;

            while(j < n){
                pair<int, int>temp = {prefix[j]+1, INT_MIN};
                int idx = lower_bound(a.begin(), a.end(), temp) - a.begin();
                idx--;

                if (idx ==j) break;

                totalGreater += idx - j;
                j = idx;
            }
            
            ans[a[i].second] = totalGreater;
        }

        for(auto &it : ans)
            cout<<it<<" ";

        cout<<"\n";
    }

    return 0;
}
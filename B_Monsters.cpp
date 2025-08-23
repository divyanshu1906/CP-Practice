#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        vector<pair<int, int>>health(n);
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            health[i] = {x, i+1};
        }
        
        for(int i=0; i<n; i++){
            health[i].first = health[i].first % k;

            if(health[i].first == 0){
                health[i].first = k;
            }
        }

        sort(health.begin(), health.end(), [](pair<int, int>&a, pair<int, int>&b){
            if(a.first != b.first){
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        for(auto it : health){
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}
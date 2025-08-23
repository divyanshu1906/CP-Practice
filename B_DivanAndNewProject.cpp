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

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        vector<pair<int, int>>buildingMap;
        for(int i=0; i<n; i++){
            buildingMap.push_back({a[i], i});
        }

        sort(buildingMap.rbegin(), buildingMap.rend());

        vector<int>ans(n+1, 0);
        ans[0] = 0;

        int minute = 0;
        int coordinate = 1;
        for(int i=0; i<n; i++){
            ans[buildingMap[i].second+1] = coordinate;
            minute += (2 * abs(coordinate) * buildingMap[i].first);

            if(coordinate < 0){
                coordinate = abs(coordinate) + 1; 
            }
            else{
                coordinate = -coordinate;
            }
        }

        cout<<minute<<"\n";
        for(auto &i : ans){
            cout<<i<<" ";
        }
        cout<<"\n";
    }       

    return 0;
}
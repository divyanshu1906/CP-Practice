#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        vector<vector<int>>a(n, vector<int>(m));
        bool isZeroPresent = false;
        int negativeCount = 0;
        int absAns = 0;
        int minAbs = LLONG_MAX;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
                if(a[i][j] == 0) isZeroPresent = true;
                if(a[i][j] < 0) negativeCount++;
                absAns += abs(a[i][j]);
                minAbs = min(minAbs, abs(a[i][j]));
            }
        }

        if(isZeroPresent || negativeCount % 2 == 0){
            cout << absAns << "\n";
        } else {
            cout << absAns - 2 * minAbs << "\n";
        }   
    }

    return 0;
}
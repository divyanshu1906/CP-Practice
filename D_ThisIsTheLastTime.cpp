#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        long long k;
        cin>>n>>k;

        vector<vector<long long>>casino(n, vector<long long>(3));

        for(int i=0; i<n; i++){
            for(int j=0; j<3; j++){
                cin>>casino[i][j];
            }
        }

        sort(casino.begin(), casino.end());

        vector<bool> visited(n, false);
        
        while(true){
            int bestCasino = -1;
            long long bestValue = k;
            
            for(int i = 0; i < n; i++){
                if(!visited[i] && casino[i][0] <= k && k <= casino[i][1]){
                    if(casino[i][2] > bestValue){
                        bestValue = casino[i][2];
                        bestCasino = i;
                    }
                }
            }
            
            if(bestCasino == -1){
                break;
            }
            
            visited[bestCasino] = true;
            k = bestValue;
        }

        cout<<k<<"\n";
    }

    return 0;

}
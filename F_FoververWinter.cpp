#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        map<int, vector<int>>adj;
        for(int i=0; i<m; i++){
            
            int u, v;
            cin>>u>>v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int corner = -1;
        for(auto it : adj){
            int node = it.first;
            vector<int> vec = it.second;
            if(vec.size() == 1) {
                corner = node;
                break;
            }
        }

        int cornerConnectedElement = adj[corner][0];

        vector<int>cornerConnected = adj[cornerConnectedElement];

        int middleNode = 0;
        for(int i=0; i<cornerConnected.size(); i++){
            if(adj[cornerConnected[i]].size() > 1){
                middleNode = adj[cornerConnected[i]].size();
            }
        }

        int x = middleNode;
        int y = cornerConnected.size()-1;

        cout<<x<<" "<<y<<"\n";
    }


    return 0;
}
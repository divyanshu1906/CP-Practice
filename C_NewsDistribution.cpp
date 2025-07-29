#include<bits/stdc++.h> 
using namespace std;

set<int> bfs(vector<int>adj[], vector<int>&vis, int node){
    set<int>ret;
    ret.insert(node);

    vis[node] = 1;
    queue<int>bf;
    bf.push(node);

    while(!bf.empty()){
        int trav = bf.front();
        bf.pop();

        for(auto &it : adj[trav]){
            if(!vis[it]){
                bf.push(it);
                ret.insert(it);
                vis[it] = 1;
            }
        }
    }

    return ret;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin>>n>>m;

    vector<int>adj[n+1];
    for(int i=0; i<m; i++){
        int size;
        cin>>size;

        vector<int>input(size);
        for(int j=0; j<size; j++){
            cin>>input[j];
        }

        for(int j=0; j<size-1; j++){
            adj[input[j]].push_back(input[j+1]);
            adj[input[j+1]].push_back(input[j]);
        }
    }
    vector<set<int>>components;
    vector<int>vis(n+1);

    for(int i=1; i<=n; i++){
        if(!vis[i]){
            components.push_back(bfs(adj, vis, i));
        }
    }

    vector<int>ans(n+1);

    for(auto &it : components){
        for(auto &i : it){
            ans[i] = it.size();
        }
    }

    for(int i=1; i<=n; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
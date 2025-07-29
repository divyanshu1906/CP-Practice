#include<bits/stdc++.h>
using namespace std;
int n,m;
int dfs(int i, int j, vector<vector<bool>>&visited, vector<vector<int>>&grid, vector<vector<int>>&directions){
    visited[i][j] = true;
    int ans = grid[i][j]; 
    
    for(auto dir : directions){
        int i_ = i + dir[0];
        int j_ = j + dir[1];

        if(i_ >=0 && i_ <n && j_>=0 && j_<m && !visited[i_][j_] && grid[i_][j_] != 0){
            ans += dfs(i_, j_, visited, grid, directions); 
        }

    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    
    while(t--){

        cin>>n>>m;
        vector<vector<int>>grid(n, vector<int>(m));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){  
                cin>>grid[i][j];
            }
        }
        
        vector<vector<bool>>visited(n, vector<bool>(m, false));
        vector<vector<int>>directions{{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        int totalDepth = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!visited[i][j] && grid[i][j] != 0){  
                    int currDepth = dfs(i, j, visited, grid, directions);
                    totalDepth = max(currDepth, totalDepth);
                }
            }
        }

        cout<<totalDepth<<"\n";

    }

    return 0;

}
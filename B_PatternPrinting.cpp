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
        vector<vector<char>>pattern(n, vector<char>(m));

        int maxHashCount = 0;
        int row = -1;
        for(int i=0; i<n; i++){
            int currHashCount = 0;
            for(int j=0; j<m; j++){
                cin>>pattern[i][j];
                if(pattern[i][j] == '#') currHashCount++;
            }
            if(maxHashCount < currHashCount){
                maxHashCount = currHashCount;
                row = i;
            }
        }


        int halfHash = (maxHashCount+1)/2;
        int col=0;
        while(halfHash != 0 && col < m){
            if(pattern[row][col] == '#'){
                halfHash--;
            }
            col++;
        }
        cout<<row+1<<" "<<col<<"\n";

    }
    return 0;

}
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        vector<vector<char>>matrix(10, vector<char>(10));

        vector<vector<int>>marks;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin>>matrix[i][j];
                if(matrix[i][j] == 'X'){
                    marks.push_back({i, j});
                }
            }
        }

        vector<vector<int>>scores(10, vector<int>(10, 1));

        for(int layer = 1; layer <= 4; layer++){
            int value = layer + 1;
            for(int i = layer; i < 10 - layer; i++){
                for(int j = layer; j < 10 - layer; j++){
                    scores[i][j] = value;
                }
            }
        }

        int totalScores = 0;

        for(int i=0; i<marks.size(); i++){
            int row = marks[i][0];
            int col = marks[i][1];
            totalScores += scores[row][col];
        }

        cout<<totalScores<<"\n";
    }
    return 0;
}
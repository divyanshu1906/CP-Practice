#include<bits/stdc++.h>
using namespace std;

int findingMinimizedMaxValue(vector<vector<int>>&arr, int maxElement, int n, int m){
    int maxElementCount = 0;
    vector<int>rowMap(n, 0), colMap(m, 0);


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == maxElement){
                maxElementCount++;
                rowMap[i]++;
                colMap[j]++;
            }
        }
    }  

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == maxElement){
                if((rowMap[i] + colMap[j] - 1) == maxElementCount){
                    return maxElement-1;
                }
            }
            else if(rowMap[i] + colMap[j] == maxElementCount){
                return maxElement-1;
            }
        }
    }
    
    return maxElement;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        vector<vector<int>> arr(n, vector<int>(m));
        int maxElement = INT_MIN;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
                maxElement = max(maxElement, arr[i][j]);
            }
        }
        
        cout<<findingMinimizedMaxValue(arr, maxElement, n, m)<<'\n';
    }

    return 0;
}
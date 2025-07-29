#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int>estimatedTemperature(n), actualTemperature(n);
        for(int i=0; i<n; i++){
            cin>>estimatedTemperature[i];
        }

        for(int i=0; i<n; i++){
            cin>>actualTemperature[i];
        }

        sort(actualTemperature.begin(), actualTemperature.end());
        vector<pair<int, int>>sortedEstimatedTemperature;
        for(int i=0; i<n; i++){
            sortedEstimatedTemperature.push_back({estimatedTemperature[i], i});
        }

        sort(sortedEstimatedTemperature.begin(), sortedEstimatedTemperature.end());

        vector<int> result(n);
        for(int i = 0; i < n; i++) {
            int idx = sortedEstimatedTemperature[i].second;
            result[idx] = actualTemperature[i];
        }

        for(int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
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
        vector<int>arr(n);
        int maxZeroCount = 0;
        int zeroCount = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] != 0){
                zeroCount = 0;
            }
            else{
                zeroCount++;
            }
            maxZeroCount = max(maxZeroCount, zeroCount);
        }
        cout<<maxZeroCount<<"/n";
    }

    return 0;
}
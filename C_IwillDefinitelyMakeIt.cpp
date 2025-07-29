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

        vector<int>building(n);

        for(int i=0; i<n; i++){
            cin>>building[i];
        }

        int currBuilding = building[k-1];

        
        int waterDifference = building[k-1];
        sort(building.begin(), building.end());

        int idx = -1;
        for(int i=0; i<n; i++){
            if(building[i] == currBuilding){
                idx = i;
                break;
            }
        }

        bool submerged= false;
        for(; idx<n-1; idx++){
            if(building[idx+1] - building[idx] > waterDifference){
                submerged = true;
                break;
            }
        }

        if(submerged){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }

    return 0;
}
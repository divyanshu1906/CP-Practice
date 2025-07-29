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
        cin>>n;
        vector<int>nums(n);

        for(int i=0; i<n; i++){
            cin>>nums[i];
        }

        map<int, int>mpp;
        long long ans = 0;
        
        for(int i=0; i<n; i++){
            int key = nums[i] - i;

            ans += mpp[key];  
            mpp[key]++;      
        }

        cout<<ans<<"\n";
    }

    return 0;
}
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

        vector<int>nums(n);
        bool noOne = false;
        bool noZero = false;
        for(int i=0; i<n; i++){
            cin>>nums[i];

            if(nums[i] == 0) noZero = true;
            if(nums[i] == 1) noOne = true;
        }

        if(!noZero){
            cout<<0<<"\n";
            continue;
        }


        int idx = 0;
        int reachedPeak = 0;
        while(idx<n){
            int time = k;
            while(idx<n && nums[idx] != 1 && time>0){
                idx++;
                time--;
            }

            if(time==0){
                reachedPeak++;
             
            }
            idx++;
        }
        cout<<reachedPeak<<"\n";
    }
    
    return 0;
}
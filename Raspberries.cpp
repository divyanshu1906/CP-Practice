#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int>nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }

        int ans = INT_MAX;
        int evenCount = 0;

        for(int i=0; i<n; i++){
            if(nums[i] % 2 == 0) evenCount++;
            if(nums[i] % k == 0) ans = 0;

            ans = min(ans, (k - nums[i] % k));
        }

        if(k==4){
            if(evenCount >= 2){
                ans = min(ans, 0);
            }
            else if(evenCount == 1){
                ans = min(ans, 1);
            }
            else if(evenCount==0){
                ans = min(ans, 2);
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}
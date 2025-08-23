#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int minElement = INT_MAX;
        vector<int>secondMinimum;
        for(int i=0; i<n; i++){
            int s;
            cin>>s;

            vector<int>nums(s);
            for(int i=0; i<s; i++){
                cin>>nums[i];
                minElement = min(minElement, nums[i]);
            }

            int currMinimum = INT_MAX, currSecondMinimum = INT_MAX;
            for(int i=0; i<s; i++){
                if(nums[i] < currMinimum){
                    currSecondMinimum = currMinimum;
                    currMinimum = nums[i];
                }
                else if(nums[i] < currSecondMinimum){
                    currSecondMinimum = nums[i];
                }
            }
            secondMinimum.push_back(currSecondMinimum);
        }
        sort(secondMinimum.begin(), secondMinimum.end());

        int ans = minElement;
        for(int i=n-1; i>0; i--){
            ans += secondMinimum[i];
        }

        cout<<ans<<"\n";
    }

    return 0;
}
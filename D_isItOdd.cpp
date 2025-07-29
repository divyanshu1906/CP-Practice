#include<bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n, q;
        cin>>n>>q;

        vector<int>nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        
        vector<long long>prefixSum(n+1);
        prefixSum[0] = 0;

        for(int i=1; i<n+1; i++){
            prefixSum[i] = prefixSum[i-1] + nums[i-1]; 
        }

        while(q--){
            int l, r, k;
            cin>>l>>r>>k;

            long long totalSum = prefixSum[n];
            long long rangeLength = r - l + 1;
            long long rangeSum = prefixSum[r] - prefixSum[l-1];

            long long remainingSum = totalSum - rangeSum;
            long long newRangeSum = rangeLength * k;
            long long newTotalSum = remainingSum + newRangeSum;

            if(newTotalSum % 2 == 1){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
    }
    return 0;
}
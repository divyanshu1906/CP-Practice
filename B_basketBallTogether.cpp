#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    int n, d;
    cin>>n>>d;

    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    
    sort(nums.begin(), nums.end());

    int i=0, j=n-1;
    int numberOfWins = 0;
    int length = 2;
    while(i<=j){
        if(nums[j] > d){
            numberOfWins++;
            j--;
            continue;
        }

        while(nums[j] * length <= d){
            i++;
            length++;
        }

        if(i<j) numberOfWins++;
        i++;
        length = 2;
        j--;
    }

    cout<<numberOfWins<<"\n";
    return 0;
}


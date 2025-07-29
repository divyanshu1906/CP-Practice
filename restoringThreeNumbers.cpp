#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr(4, 0);
    vector<int>ans(3, 0);

    for(int i=0; i<4; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i=0; i<3; i++){
        ans[i] = arr[3] - arr[i];
    }

    for(int i=0; i<3; i++){
        cout<<ans[i]<<" ";
    }

    return 0;

}
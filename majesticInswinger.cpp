#include<bits/stdc++.h>
using namespace std;

vector<int> findingMaxElementInK(vector<int>& arr, int k){
    vector<int> ans;
    deque<int> dq;

    for(int i = 0; i < arr.size(); i++){
        if(!dq.empty() && dq.front() == i - k){
            dq.pop_front();
        }

        while(!dq.empty() && arr[dq.back()] < arr[i]){
            dq.pop_back();
        }

        dq.push_back(i);

        if(i >= k - 1){
            ans.push_back(arr[dq.front()]);
        }
    }

    return ans;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    vector<int> ans = findingMaxElementInK(arr, k);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
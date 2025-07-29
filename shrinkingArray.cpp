#include<bits/stdc++.h>
using namespace std;

int shrinkingArray(vector<int>&arr, int n){
    if(n==2 && abs(arr[0]-arr[1]) > 1) return -1;

    
    for (int i = 0; i < n - 1; ++i) {
        if (abs(arr[i] - arr[i+1]) <= 1) return 0;
    }

    for (int i = 1; i < n - 1; i++) { 

        int firstElement = arr[i];
        int secondElement = arr[i+1];

        if(arr[i-1] <= firstElement && arr[i] >= secondElement || arr[i-1] >= firstElement && arr[i] <= secondElement){
            return 1;
        }
    }

    return -1; 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        cout<<shrinkingArray(arr, n)<<"\n";
    }

    return 0;
}
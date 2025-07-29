#include<bits/stdc++.h>
using namespace std;

bool isSmoking(vector<int>&arr){
    int n = arr.size();
    stack<int>st;
    int i=0;

    while(arr[i] != 1){
        if(!st.empty() && arr[i] > st.top()) return false;
        st.push(arr[i]);
        i++;
    }

    while(i<n){
        while(arr[i] > st.top()){
            st.pop();
        }
        if(!st.empty() && arr[i] > st.top()) return false;
        st.push(arr[i]);
        i++;
    }

    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    vector<int>arr(n);
    while(true){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        if(isSmoking(arr)){
            cout<<"yes"<<"\n";
        }else{
            cout<<"no"<<"\n";
        }
    }
    
    
    return 0;
}
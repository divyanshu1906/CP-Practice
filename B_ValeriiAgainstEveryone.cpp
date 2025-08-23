#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long 

int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        unordered_set<int>st;
        for(int i=0; i<n; i++){
            cin>>a[i];
            st.insert(a[i]);
        }

        if(st.size() < n) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

    return 0;
}
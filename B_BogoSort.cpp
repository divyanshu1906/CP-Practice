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
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        sort(a.rbegin(), a.rend());

        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        
        cout<<"\n";
    }
}
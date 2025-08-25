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

        string s;
        cin>>s;

        unordered_set<char>st;
        st.insert(s[0]);

        int ans = 1;
        for(int i=1; i<n; i++){
            st.insert(s[i]);
            ans += st.size();
        }

        cout<<ans<<"\n";
    }

    return 0;

}
#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main() {
    fastt;
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n;
        cin>>s;

        unordered_set<char>st;
        vector<int>prefix(n+1, 0);
        vector<int>suffix(n+1, 0);

        for(int i=1; i<=n; i++){
            st.insert(s[i-1]);
            prefix[i] = st.size();
        }

        st.clear();
        for(int i=n; i>=1; i--){
            st.insert(s[i-1]);
            suffix[i] = st.size();
        }

        int ans = 0;
        for(int i=0; i<n; i++){
            ans = max(ans, prefix[i] + suffix[i+1]);
        }

        cout<<ans<<"\n";
    }

    return 0;
}

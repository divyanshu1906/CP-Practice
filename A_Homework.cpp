#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int n, m;
        string a, b, c;
        cin>>n;
        cin>>a;
        cin>>m;
        cin>>b;
        cin>>c;

        string ans = "";

        for(int i=m-1; i>=0; i--){
            if(c[i] == 'V'){
                ans+=b[i];
            }
        }

        ans += a;

        for(int i=0; i<m; i++){
            if(c[i] == 'D'){
                ans += b[i];
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int n, r, b;
        cin>>n>>r>>b;

        int space = b+1;
        int eachSpaceGet = r/space;
        int extra = r%space;

        string ans;
        int i=0;

        while(i<n){
            int redSpace = eachSpaceGet;
            while(redSpace--){
                ans += 'R';
                i++;
            }
            if(extra != 0){
                ans+='R';
                i++;
                extra--;
            }
            if(i<n){
                ans+='B';
                i++;
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}
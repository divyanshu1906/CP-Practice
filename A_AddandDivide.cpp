#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int a, b;
        cin>>a>>b;

        int ans = INT_MAX;
        for(int addition=0; addition<32; addition++){
            int operations = addition;
            int newB = b + addition;
            
            if(newB==1) continue;

            int copyA = a;
            while(copyA > 0){
                copyA /= newB;
                operations++;
            }
            ans = min(ans, operations);
        }

        cout<<ans<<"\n";
    }

    return 0;
}
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

        int ans = a;

        int x = a-1;
        int XOR = 0;

        if(x%4==0){
            XOR = x;
        }
        else if(x%4==1){
            XOR = 1;
        }
        else if(x%4==2){
            XOR = x+1;
        }
        else{
            XOR = 0;
        }

        if(XOR == b){
            cout<<ans<<"\n";
        }
        else if((XOR ^ b) != a){
            cout<<ans+1<<"\n";
        }
        else{
            cout<<ans+2<<"\n";
        }
    }

    return 0;
}
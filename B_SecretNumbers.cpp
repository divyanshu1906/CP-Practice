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

        vector<int>ans;

        int mul = 10;

        while(mul + 1 <= n){
            if(n % (mul + 1) == 0) ans.push_back(mul+1);
            mul *= 10;
        }

        if(ans.empty()){
            cout<<0<<"\n";
        }
        else{
            cout<<ans.size()<<"\n";
            for(auto &i : ans)
                cout<<i<<" ";
            cout<<"\n";
        }
    }

    return 0;
}
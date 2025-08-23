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
        char ch;
        string s;
        
        cin>>n;
        cin>>ch;
        cin>>s;

        string str = s + s;

        int lastSeenGreen = -1;
        int ans = INT_MIN;

        for(int i=(n*2)-1; i>=0; i--){
            if(str[i] == 'g'){
                lastSeenGreen = i;
            }

            if(str[i] == ch && lastSeenGreen != -1){
                ans = max(ans, lastSeenGreen - i);
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}
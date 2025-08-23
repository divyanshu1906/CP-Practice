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

        int minPossible = 0;
        int currVal = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                currVal++;
            }
            else{
                currVal--;
            }

            minPossible = min(minPossible, currVal);
        }
        cout<<abs(minPossible)<<"\n";
    }
}
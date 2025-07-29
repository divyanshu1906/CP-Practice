#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        string str;
        cin>>str;

        int l=0, r=n-1;
        int unequalPairs = 0;
        while(l<r){
            if(str[l] != str[r]){
                unequalPairs++;
            }
            l++; 
            r--;
        }

        string ans = "";
        for(int i=0; i<n+1; i++){
            ans += '0';
        }

        int till = n-unequalPairs;

        if(n%2==0){
            for(int i=unequalPairs; i<=till; i+=2){
                ans[i] = '1';
            }
        }
        else{
            for(int i=unequalPairs; i<=till; i++){
                ans[i] = '1';
            }
        }

        cout<<ans<<"\n";

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        long long num;
        cin>>num;

        while(num%2==0){
            num /= 2;
        }

        if(num>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
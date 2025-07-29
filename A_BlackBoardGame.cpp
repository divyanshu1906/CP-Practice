#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        if(n%4==0){
            cout<<"BOB"<<"\n";
        }
        else{
            cout<<"ALICE"<<"\n";
        }

    }
    return 0;
}
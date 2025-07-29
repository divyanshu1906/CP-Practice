#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;

        if(a>b) swap(a, b);

        if((a<c && c<b)  != (a<d && d<b)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }

    return 0;
}
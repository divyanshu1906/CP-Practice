#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    fastt;

    int n;
    cin>>n;
    string s;
    cin>>s;


    bool found = false;
    int idx1 = -1, idx2 = -1;
    for(int i=0; i<n-1; i++){
        if(s[i]  > s[i+1]){
            found = true;
            idx1 = i+1;
            idx2 = i+2;
            break;
        }
    }

    if(found){
        cout<<"YES"<<"\n";
        cout<<idx1<<" "<<idx2<<"\n";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
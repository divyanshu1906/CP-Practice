#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int a, b;
        cin>>a;
        cin>>b;
        cout<<b-a;
    }

    return 0;
}
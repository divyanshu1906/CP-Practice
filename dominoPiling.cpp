#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin>>n>>m;

    if(n*m % 2==0){
        cout<<(n*m)/2;
    }
    else{
        cout<<((n*m)-1)/2;
    }

    return 0;
}
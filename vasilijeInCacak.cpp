#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin>>t;

    while(t--){
        long long n, k, x;
        cin>>n>>k>>x;

        long long minAns = (k*(k+1))/2;
        long long rem = n-k;
        long long maxAns = (n*(n+1))/2 - (rem*(rem+1))/2;

        if(x >= minAns && x <= maxAns){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int nextPrime(int n){
    for(int i=n;;i++){
        bool isPrime = true;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) return i;
    }
}
int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int d;
        cin>>d;

        int a = nextPrime(d+1);
        int b = nextPrime(a+d);

        int ans = a*b;
        cout<<ans<<"\n";
    }

    return 0;
}
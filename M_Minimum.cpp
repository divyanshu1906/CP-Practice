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

        int ansA = 1, ansB = n-1;
        for(int fact = 2; fact * fact <= n; fact++){
            if(n % fact == 0){
                ansA = n / fact;
                ansB = n - ansA;
                break;
            }
        }
        cout<<ansA<<" "<<ansB<<"\n";
    }

    return 0;
}
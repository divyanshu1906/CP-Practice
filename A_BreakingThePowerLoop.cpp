#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n, k, ans=0;
        cin>>n>>k;

        if(k==1){
            cout<<n<<"\n";
        }
        else{
            
            while(n > 0){
                long long power = 1;
                while(power*k <= n) power *= k;

                n -= power;
                ans++;
            }
            
            cout<<ans<<"\n";
        }
    }
    return 0;
}
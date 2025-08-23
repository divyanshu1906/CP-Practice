#include<bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int a, b ;
        cin>>a>>b;

        int ra = a, rb = b;

        while(ra % 2 == 0)
            ra /= 2;

        while(rb % 2 == 0)
            rb /= 2;

        if(ra != rb){
            cout<<-1<<"\n";
        }   
        else{
            a /= ra;
            b /= rb;

            a = log2(a);
            b = log2(b);

            int ans = (abs(a-b) + 3 - 1) / 3 ; //(ceil)
            cout<<ans<<"\n";
        }
    }
}
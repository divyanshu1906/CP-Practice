#include<bits/stdc++.h> 
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

bool isFair(int n){
    int num = n;

    while(num != 0){
        int rem = num%10;
        if(rem != 0 && n%rem!=0)return false;
        num /= 10;
    }
    return true;
}
int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        unordered_set<int>st;
        int temp = n;
        int ans = n;

        while(!isFair(n)){
            n++;
        }
        cout<<n<<"\n";
    }
}
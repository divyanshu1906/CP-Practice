#include<bits/stdc++.h>
using namespace std;

int findingMinimumNumber(int n){
    if(n <= 9) return n;

    int ans = 9;  
               
    while(n > 0){
        int rem = n % 10;
        n = n / 10;
        ans = min(ans, rem);
    }

    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        cout<<findingMinimumNumber(n)<<"\n";
    }
    return 0;
}
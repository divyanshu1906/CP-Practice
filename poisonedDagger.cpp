#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<long long>&timeLine, long long h, long long poison){
    int n = timeLine.size();
    long long damage = 0;
    
    for(int i=0; i<n-1; i++){
        damage += min(poison, timeLine[i+1]-timeLine[i]);
    }

    damage += poison;
    return damage >= h;
}

long long minimumValueOfDaggerPoison(vector<long long>&timeLine, long long h){
    int n = timeLine.size();

    long long l = 1, r = 1e18;
    long long ans = r;

    while(l<=r){
        long long mid = l + (r-l)/2;

        if(isPossible(timeLine, h, mid)){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
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
        long long h;
        cin>>n;
        cin>>h;

        vector<long long>timeLine(n);
        for(int i=0; i<n; i++){
            cin>>timeLine[i];
        }
        
        cout<<minimumValueOfDaggerPoison(timeLine, h)<<"\n";
    }

    return 0;
}
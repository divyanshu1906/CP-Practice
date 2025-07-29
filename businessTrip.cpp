#include<bits/stdc++.h>
using namespace std;

int findingMinGrowth(vector<int>&growth, int k){
    sort(growth.begin(), growth.end());

    int minGrowth = 0;
    if(k==0) return 0;

    for(int i=11; i>=0; i--){
        minGrowth += growth[i];
        if(minGrowth >= k){
            return 12 - i ;
        }
    }

    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k;
    cin>>k; 
    vector<int>growth(12);
    for(int i=0; i<12; i++){
        cin>>growth[i];
    }

    cout<<findingMinGrowth(growth, k);

    return 0;
}
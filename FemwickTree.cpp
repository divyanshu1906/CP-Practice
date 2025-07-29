#include<bits/stdc++.h> 
using namespace std;

vector<int>fenWick;
int prefixSum(int idx){
    int sum = 0;
    while(idx > 0){
        sum += fenWick[idx];
        idx -= (idx & (-idx));
    }
    return sum;
}

void update(int idx, int x){
    while(idx<=n){
        fenWick[idx] += x;
        idx += (idx & (-idx));
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    

    return 0;
}
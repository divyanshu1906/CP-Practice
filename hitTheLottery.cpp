#include<bits/stdc++.h>
using namespace std;

int findMinimumDenominations(long long n, vector<int>& denominations) {
    int coins = 0;
    for (int denom : denominations) {
        coins += n / denom;   
        n %= denom;       
    }
    return coins;
}

int main(){
    int n;
    cin>>n;
    vector<int> denominations = {100, 20, 10, 5, 1};
    cout << findMinimumDenominations(n, denominations);
    return 0;
}
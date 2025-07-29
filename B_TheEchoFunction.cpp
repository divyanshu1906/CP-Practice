#include<bits/stdc++.h>
using namespace std;

long long findingEcho(long long n, map<long long, long long>& dp) {
    if (n == 0) return 1;

    if (dp.count(n)) return dp[n];

    return dp[n] = findingEcho(n/2, dp) + findingEcho(n / 3, dp);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;

    map<long long, long long> dp;
    cout << findingEcho(n, dp);
}

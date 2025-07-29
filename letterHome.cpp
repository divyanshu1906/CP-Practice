#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n, s;
        cin >> n >> s;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int leftMost = arr[0];
        int rightMost = arr[n - 1];

        int steps = min(abs(s - leftMost), abs(s - rightMost)) + (rightMost - leftMost);
        cout << steps << '\n';
    }

    return 0;
}
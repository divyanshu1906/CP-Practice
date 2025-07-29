#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);

        int minEle = -1;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            minEle = minEle & arr[i];
        }

        cout<<minEle<<"\n";
    }

    return 0;
}
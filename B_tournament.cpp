#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;

        vector<int> arr(n);
        int player = 0;
        int maxPlayer = -1;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            if(i+1 == j) player = arr[i];
            maxPlayer = max(maxPlayer, arr[i]);
        }
        
        if(k>=2){
            cout<<"YES"<< "\n";
        }
        else{
            if(player == maxPlayer){
                cout<<"YES"<< "\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }

    return 0;
}

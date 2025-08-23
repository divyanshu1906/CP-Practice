#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main(){
    fastt;

    int t;
    cin>>t;

    while(t--){
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> dayTemperature(n);
        for (int i = 0; i < n; ++i) {
            cin >> dayTemperature[i];
        }

        int maxConsecutiveDays = 0;
        int count = 0;

        for (int i = 0; i < n; ++i) {
            if (dayTemperature[i] <= q) {
                count++;
            } else {
                if (count >= k) {
                    int c = count - k + 1;
                    maxConsecutiveDays += c * (c + 1) / 2;
                }
                count = 0;
            }
        }

        if (count >= k) {
            int c = count - k + 1;
            maxConsecutiveDays += c * (c + 1) / 2;
        }

        cout << maxConsecutiveDays << '\n';
    }
    return 0;
}
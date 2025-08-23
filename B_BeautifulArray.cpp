#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int32_t main()
{
    fastt;

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, b, s;
        cin >> n >> k >> b >> s;

        int minAns = k * b;
        int maxAns = k * b + (k-1) * n;

        if (s > maxAns || s < minAns)
        {
            cout << -1 << "\n";
            continue;
        }

        vector<int> ans(n, 0);

        int newS = s - k * b;
        ans[0] = k*b + min(newS, k-1);
        
        newS -= min(newS, k-1);

        for (int i = 1; i < n && newS > 0; i++)
        {
            long long add = min(k - 1, newS);
            
            ans[i] += add;
            newS -= add;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}